/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armosnie <armosnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:37:48 by armosnie          #+#    #+#             */
/*   Updated: 2026/01/13 14:16:36 by armosnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"


int main() {
    
    Dog* scooby = new Dog();
    Cat* zouzou = new Cat();

    scooby->makeSound();
    zouzou->makeSound();

    scooby->getBrain()->setIdea(0, "scooby : OU SONT MES SCOOBY SNAKCS");
    zouzou->getBrain()->setIdea(0, "zouzou : lache ca mon gars");
    scooby->getBrain()->setIdea(1, "scooby : ah, ils etaient la...");
    zouzou->getBrain()->setIdea(1, "zouzou : trop bete lahuiss");

    std::cout << scooby->getBrain()->getIdea(0) << std::endl;
    std::cout << zouzou->getBrain()->getIdea(0) << std::endl;
    std::cout << scooby->getBrain()->getIdea(1) << std::endl;
    std::cout << zouzou->getBrain()->getIdea(1) << std::endl;
    
    delete scooby;
    delete zouzou;

    return 0;
}