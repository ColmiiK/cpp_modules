/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:27:05 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/25 11:30:59 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <Fixed.hpp>
#include <iostream>

class Point {
	private:
		const Fixed _x;
		const Fixed _y;
	public:
		Point( void );
		Point( const float x, const float y );
		Point( const Point &source );
		Point& operator=( const Point &source );
		~Point( void );
		
		Fixed getX( void ) const;
		Fixed getY( void ) const;
};

#endif