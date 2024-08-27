<div align="center">
    <img src="https://github.com/15Galan/42_project-readmes/blob/master/banners/cursus/projects/cpp_module01-light.png?raw=true#gh-light-mode-only" alt="Banner (claro)" />
    <img src="https://github.com/15Galan/42_project-readmes/blob/master/banners/cursus/projects/cpp_module01-dark.png?raw=true#gh-dark-mode-only" alt="Banner (oscuro)" />
    <br>
    Memory allocation, pointers to members,
references, switch statement
    <br>
    <a href='https://profile.intra.42.fr/users/alvega-g' target="_blank">
        <img alt='42 (oscuro)' src='https://img.shields.io/badge/Málaga-black?style=flat&logo=42&logoColor=white'/>
    </a>
</div>

---

# Exercise 00: BraiiiiiiinnnzzzZ

<table>
<tr>
	<th>Turn-in directory:</th> 
	<td><i>ex00/</i></td>
</tr>
  <tr>
    <th>Files to turn in</th>
    <td><code>Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp, newZombie.cpp, randomChump.cpp</code></td>
  </tr>
  <tr>
    <th>Forbidden functions:</th>
    <td>None</td>
  </tr>
</table>

First, implement a `Zombie` class. It has a string private attribute `name`.
Add a member function `void announce( void );` to the Zombie class. Zombies
announce themselves as follows:

	<name>: BraiiiiiiinnnzzzZ...

Don’t print the angle brackets (< and >). For a zombie named Foo, the message
would be:

	Foo: BraiiiiiiinnnzzzZ...

Then, implement the two following functions:
- `Zombie* newZombie( std::string name );` <br>
	It creates a zombie, name it, and return it so you can use it outside of the function
scope.
- `void randomChump( std::string name );` <br>
	It creates a zombie, name it, and the zombie announces itself.

Now, what is the actual point of the exercise? You have to determine in what case
it’s better to allocate the zombies on the stack or heap.

Zombies must be destroyed when you don’t need them anymore. The destructor must
print a message with the name of the zombie for debugging purposes.
# Exercise 01: Moar brainz!

<table>
<tr>
	<th>Turn-in directory:</th> 
	<td><i>ex01/</i></td>
</tr>
  <tr>
    <th>Files to turn in</th>
    <td><code>Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp, zombieHorde.cpp</code></td>
  </tr>
  <tr>
    <th>Forbidden functions:</th>
    <td>None</td>
  </tr>
</table>

Time to create a __horde of Zombies!__

Implement the following function in the appropriate file:

	Zombie* zombieHorde( int N, std::string name );

It must allocate N Zombie objects in a single allocation. Then, it has to initialize the
zombies, giving each one of them the name passed as parameter. The function returns a
pointer to the first zombie.

Implement your own tests to ensure your `zombieHorde()` function works as expected.
Try to call `announce()` for each one of the zombies.

Don’t forget to `delete` all the zombies and check for __memory leaks__.

# Exercise 02: HI THIS IS BRAIN

<table>
<tr>
	<th>Turn-in directory:</th> 
	<td><i>ex02/</i></td>
</tr>
  <tr>
    <th>Files to turn in</th>
    <td><code>Makefile, main.cpp</code></td>
  </tr>
  <tr>
    <th>Forbidden functions:</th>
    <td>None</td>
  </tr>
</table>

Write a program that contains:
- A string variable initialized to "HI THIS IS BRAIN".
- `stringPTR`: A pointer to the string.
- `stringREF`: A reference to the string.

Your program has to print:
- The memory address of the string variable.
- The memory address held by `stringPTR`.
- The memory address held by `stringREF`.

And then:
- The value of the string variable.
- The value pointed to by `stringPTR`.
- The value pointed to by `stringREF`.

That’s all, no tricks. The goal of this exercise is to demystify references which can
seem completely new. Although there are some little differences, this is another syntax
for something you already do: address manipulation.

# Exercise 03: Unnecessary violence

<table>
<tr>
	<th>Turn-in directory:</th> 
	<td><i>ex03/</i></td>
</tr>
  <tr>
    <th>Files to turn in</th>
    <td><code>Makefile, main.cpp, Weapon.{h, hpp}, Weapon.cpp, HumanA.{h, hpp}, HumanA.cpp, HumanB.{h, hpp}, HumanB.cpp</code></td>
  </tr>
  <tr>
    <th>Forbidden functions:</th>
    <td>None</td>
  </tr>
</table>

Implement a Weapon class that has:
- A private attribute `type`, which is a string.
- A `getType()` member function that returns a const reference to `type`.
- A `setType()` member function that sets `type` using the new one passed as parameter.

Now, create two classes: __HumanA__ and __HumanB__. They both have a `Weapon` and a
name. They also have a member function `attack()` that displays (of course, without the
angle brackets):

	<name> attacks with their <weapon type>

HumanA and HumanB are almost the same except for these two tiny details:
- While HumanA takes the Weapon in its constructor, HumanB doesn’t.
- HumanB may __not always__ have a Weapon, whereas HumanA will __always__ be armed

If your implementation is correct, executing the following code will print an attack
with "crude spiked club" then a second attack with "some other type of club" for both
test cases:

``` cpp
int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}

	return 0;
}
```
Don’t forget to check for __memory leaks__.

### In which case do you think it would be best to use a pointer to Weapon? And a reference to Weapon? Why? Think about it before starting this exercise.

# Exercise 04: Sed is for losers

<table>
<tr>
	<th>Turn-in directory:</th> 
	<td><i>ex04/</i></td>
</tr>
  <tr>
    <th>Files to turn in</th>
    <td><code>Makefile, main.cpp, *.cpp, *.{h, hpp}</code></td>
  </tr>
  <tr>
    <th>Forbidden functions:</th>
    <td><code>std::string::replace</code></td>
  </tr>
</table>

Create a program that takes three parameters in the following order: a filename and
two strings, `s1` and `s2`.

It will open the file `<filename>` and copies its content into a new file
`<filename>.replace`, replacing every occurrence of `s1` with `s2`.

Using C file manipulation functions is forbidden and will be considered cheating. All
the member functions of the class `std::string` are allowed, except `replace`. Use them
wisely!

Of course, handle unexpected inputs and errors. You have to create and turn in your
own tests to ensure your program works as expected

# Exercise 05: Harl 2.0

<table>
<tr>
	<th>Turn-in directory:</th> 
	<td><i>ex05/</i></td>
</tr>
  <tr>
    <th>Files to turn in</th>
    <td><code>: Makefile, main.cpp, Harl.{h, hpp}, Harl.cpp</code></td>
  </tr>
  <tr>
    <th>Forbidden functions:</th>
    <td><code>None</code></td>
  </tr>
</table>

Do you know Harl? We all do, do we? In case you don’t, find below the kind of
comments Harl makes. They are classified by levels:
- "__DEBUG__" level: Debug messages contain contextual information. They are mostly
used for problem diagnosis. <br>
Example: _"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"_
- "__INFO__" level: These messages contain extensive information. They are helpful for
tracing program execution in a production environment. <br>
Example: _"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"_
- "__WARNING__" level: Warning messages indicate a potential issue in the system.
However, it can be handled or ignored. <br>
Example: _"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."_
- "__ERROR__" level: These messages indicate an unrecoverable error has occurred.
This is usually a critical issue that requires manual intervention. <br>
Example: _"This is unacceptable! I want to speak to the manager now."_

You are going to automate Harl. It won’t be difficult since it always says the same
things. You have to create a __Harl__ class with the following private member functions:
- `void debug( void );`
- `void info( void );`
- `void warning( void );`
- `void error( void );`

__Harl__ also has a public member function that calls the four member functions above
depending on the level passed as parameter:

`void complain( std::string level );`

The goal of this exercise is to use __pointers to member functions__. This is not a
suggestion. Harl has to complain without using a forest of if/else if/else. It doesn’t think
twice!

Create and turn in tests to show that Harl complains a lot. You can use the examples
of comments listed above in the subject or choose to use comments of your own

# Exercise 06: Harl filter

<table>
<tr>
	<th>Turn-in directory:</th> 
	<td><i>ex06/</i></td>
</tr>
  <tr>
    <th>Files to turn in</th>
    <td><code>Makefile, main.cpp, Harl.{h, hpp}, Harl.cpp</code></td>
  </tr>
  <tr>
    <th>Forbidden functions:</th>
    <td><code>None</code></td>
  </tr>
</table>

Sometimes you don’t want to pay attention to everything Harl says. Implement a
system to filter what Harl says depending on the log levels you want to listen to.

Create a program that takes as parameter one of the four levels. It will display all
messages from this level and above. For example:

``` shell
$> ./harlFilter "WARNING"
[ WARNING ]
I think I deserve to have some extra bacon for free.
I've been coming for years whereas you started working here since last month.
[ ERROR ]
This is unacceptable, I want to speak to the manager now.
$> ./harlFilter "I am not sure how tired I am today..."
[ Probably complaining about insignificant problems ]
```

Although there are several ways to deal with Harl, one of the most effective is to
SWITCH it off.

Give the name `harlFilter` to your executable.

You must use, and maybe discover, the switch statement in this exercise.

## You can pass this module without doing exercise 06.