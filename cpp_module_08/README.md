<div align="center">
    <img src="https://github.com/15Galan/42_project-readmes/blob/master/banners/cursus/projects/cpp_module08-light.png?raw=true#gh-light-mode-only" alt="Banner (claro)" />
    <img src="https://github.com/15Galan/42_project-readmes/blob/master/banners/cursus/projects/cpp_module08-dark.png?raw=true#gh-dark-mode-only" alt="Banner (oscuro)" />
    <br>
   	Templated containers, iterators, algorithms
    <br>
    <a href='https://profile.intra.42.fr/users/alvega-g' target="_blank">
        <img alt='42 (oscuro)' src='https://img.shields.io/badge/Málaga-black?style=flat&logo=42&logoColor=white'/>
    </a>
</div>

---

### Module-specific Rules

You will notice that, in this module, the exercises can be solved WITHOUT the standard Containers and WITHOUT the standard Algorithms. 

However, using them is precisely the goal of this Module. You are allowed to use the STL. Yes, you can use the Containers (vector/list/map/and so forth) and the Algorithms (defined in header <algorithm>). Moreover, you should use them as much as you can. Thus, do your best to apply them wherever it’s appropriate. 

You will get a very bad grade if you don’t, even if your code works as expected. 

Please don’t be lazy. You can define your templates in the header files as usual. Or, if you want to, you can write your template declarations in the header files and write their implementations in .tpp files. In any case, the header files are mandatory while the .tpp files are optional.

# Exercise 00: Easy find

<table>
<tr>
	<th>Turn-in directory:</th> 
	<td><i>ex00/</i></td>
</tr>
  <tr>
    <th>Files to turn in</th>
    <td><code>Makefile, main.cpp, easyfind.{h, hpp} and optional file: easyfind.tpp</code></td>
  </tr>
  <tr>
    <th>Forbidden functions:</th>
    <td><code>None</code></td>
  </tr>
</table>


A first easy exercise is the way to start off on the right foot.

Write a function template `easyfind` that accepts a type T. It takes two parameters.
The first one has type T and the second one is an integer.

Assuming T is a container __of integers__, this function has to find the first occurrence
of the second parameter in the first parameter.

If no occurrence is found, you can either throw an exception or return an error value
of your choice. If you need some inspiration, analyze how standard containers behave.

Of course, implement and turn in your own tests to ensure everything works as expected.

### You don’t have to handle associative containers.

# Exercise 01: Span

<table>
<tr>
	<th>Turn-in directory:</th> 
	<td><i>ex01/</i></td>
</tr>
  <tr>
    <th>Files to turn in</th>
    <td><code>Makefile, main.cpp, Span.{h, hpp}, Span.cpp</code></td>
  </tr>
  <tr>
    <th>Forbidden functions:</th>
    <td><code>None</code></td>
  </tr>
</table>

Develop a __Span__ class that can store a maximum of N integers. N is an unsigned int
variable and will be the only parameter passed to the constructor.

This class will have a member function called `addNumber()` to add a single number
to the Span. It will be used in order to fill it. Any attempt to add a new element if there
are already N elements stored should throw an exception.

Next, implement two member functions: `shortestSpan()` and `longestSpan()`

They will respectively find out the shortest span or the longest span (or distance, if
you prefer) between all the numbers stored, and return it. If there are no numbers stored,
or only one, no span can be found. Thus, throw an exception.

Of course, you will write your own tests and they will be way more thorough than the
ones below. Test your Span at least with a minimum of 10 000 numbers. More would be
even better.

Running this code:

```cpp
int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}
```

Should output:

```shell
$> ./ex01
2
14
$>
```

Last but not least, it would be wonderful to fill your Span using a __range of iterators__.
Making thousands calls to `addNumber()` is so annoying. Implement a member function
to add many numbers to your Span in one call.

### If you don’t have a clue, study the Containers. Some member functions take a range of iterators in order to add a sequence of elements to the container.

# Exercise 02: Mutated abomination

<table>
<tr>
	<th>Turn-in directory:</th> 
	<td><i>ex02/</i></td>
</tr>
  <tr>
    <th>Files to turn in</th>
    <td><code>Makefile, main.cpp, MutantStack.{h, hpp} and optional file: MutantStack.tpp</code></td>
  </tr>
  <tr>
    <th>Forbidden functions:</th>
    <td><code>None</code></td>
  </tr>
</table>

Now, time to move on more serious things. Let’s develop something weird.

The `std::stack` container is very nice. Unfortunately, it is one of the only STL Containers that is NOT iterable. That’s too bad.

But why would we accept this? Especially if we can take the liberty of butchering the
original stack to create missing features.

To repair this injustice, you have to make the `std::stack` container iterable.

Write a __MutantStack__ class. It will be __implemented in terms of__ a `std::stack`.
It will offer all its member functions, plus an additional feature: __iterators__.

Of course, you will write and turn in your own tests to ensure everything works as
expected.

Find a test example below:

```cpp
int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int> s(mstack);
return 0;
}
```

If you run it a first time with your MutantStack, and a second time replacing the MutantStack with, for example, a `std::list`, the two outputs should be the same. Of course, when testing another container, update the code below with the corresponding member functions (`push()` can become `push_back()`).