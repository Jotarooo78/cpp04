/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaunito <armaunito@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:37:48 by armosnie          #+#    #+#             */
/*   Updated: 2026/01/05 15:56:37 by armaunito        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"


int main() {
    
    Dog* scooby = new Dog();
    Cat* zouzou = new Cat();

    scooby->getBrain()->setIdea(0, "scooby : OU SONT MES SCOOBY SNACKS");
    zouzou->getBrain()->setIdea(0, "zouzou : lache ca mon gars");
    scooby->getBrain()->setIdea(1, "scooby : ah, ils etaient la...");
    zouzou->getBrain()->setIdea(1, "zouzou : trop bete lahuiss");

    std::cout << scooby->getBrain()->getIdea(0) << std::endl;
    std::cout << zouzou->getBrain()->getIdea(0) << std::endl;
    std::cout << scooby->getBrain()->getIdea(1) << std::endl;
    std::cout << zouzou->getBrain()->getIdea(1) << std::endl;
    
    delete scooby;
    delete zouzou;

    Dog darkScooby;
    Cat darkZouzou;

    darkScooby.getBrain()->setIdea(0, "darkScooby : OU SONT MES SCOOBY SNACKS");
    darkScooby.getBrain()->setIdea(1, "darkZouzou : ah, ils etaient la...");
    darkZouzou.getBrain()->setIdea(0, "darkScooby : lache ca mon gars");
    darkZouzou.getBrain()->setIdea(1, "darkZouzou : trop bete lahuiss");

    std::cout << darkScooby.getBrain()->getIdea(0) << std::endl;
    std::cout << darkZouzou.getBrain()->getIdea(0) << std::endl;
    std::cout << darkScooby.getBrain()->getIdea(1) << std::endl;
    std::cout << darkZouzou.getBrain()->getIdea(1) << std::endl;

    return 0;
}