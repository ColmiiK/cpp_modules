/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:52:06 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/27 10:52:07 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}
PmergeMe::PmergeMe(PmergeMe const & obj){*this = obj;}
PmergeMe::~PmergeMe(){}
PmergeMe& PmergeMe::operator=(PmergeMe const & obj){
    if (this != &obj)
        ;
    return *this;
}

void mergeVector(std::vector<int> &a, std::vector<int> &left, std::vector<int> &right) {
    unsigned int i = 0;
    unsigned int j = 0;
    unsigned int k = 0;

    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j])
            a[k++] = left[i++];
        else
            a[k++] = right[j++];
    }

    while (i < left.size())
        a[k++] = left[i++];

    while (j < right.size())
        a[k++] = right[j++];
}

void fordJohnsonVector(std::vector<int> &a) {
    if (a.size() <= 1)
        return;
    else if (a.size() == 2){
        if (a[0] > a[1])
            std::swap(a[0], a[1]);
        return;
    }
    else if (a.size() == 3){
        if (a[0] > a[1]) std::swap(a[0], a[1]);
        if (a[1] > a[2]) std::swap(a[1], a[2]);
        if (a[0] > a[1]) std::swap(a[0], a[1]);
        return;
    }

    int midpoint = a.size() / 2;
    std::vector<int>left(a.begin(), a.begin() + midpoint);
    std::vector<int>right(a.begin() + midpoint, a.end());

    fordJohnsonVector(left);
    fordJohnsonVector(right);

    mergeVector(a, left, right);
}

std::vector<int> PmergeMe::resolveVector(std::string input){
    std::vector<int> a;
    std::stringstream ss(input);
    int n;
    ss >> n;
    while (ss) {
        a.push_back(n);
        ss >> n;
    }
    fordJohnsonVector(a);
    return a;
}


void mergeDeque(std::deque<int> &a, std::deque<int> &left, std::deque<int> &right) {
    unsigned int i = 0;
    unsigned int j = 0;
    unsigned int k = 0;

    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j])
            a[k++] = left[i++];
        else
            a[k++] = right[j++];
    }

    while (i < left.size())
        a[k++] = left[i++];

    while (j < right.size())
        a[k++] = right[j++];
}

void fordJohnsonDeque(std::deque<int> &a) {
    if (a.size() <= 1)
        return;
    else if (a.size() == 2){
        if (a[0] > a[1])
            std::swap(a[0], a[1]);
        return;
    }
    else if (a.size() == 3){
        if (a[0] > a[1]) std::swap(a[0], a[1]);
        if (a[1] > a[2]) std::swap(a[1], a[2]);
        if (a[0] > a[1]) std::swap(a[0], a[1]);
        return;
    }

    int midpoint = a.size() / 2;
    std::deque<int>left(a.begin(), a.begin() + midpoint);
    std::deque<int>right(a.begin() + midpoint, a.end());

    fordJohnsonDeque(left);
    fordJohnsonDeque(right);

    mergeDeque(a, left, right);
}

std::deque<int> PmergeMe::resolveDeque(std::string input){
    std::deque<int> a;
    std::stringstream ss(input);
    int n;
    ss >> n;
    while (ss) {
        a.push_back(n);
        ss >> n;
    }
    fordJohnsonDeque(a);
    return a;
}

