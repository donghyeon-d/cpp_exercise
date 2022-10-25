#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

	public:

		int	publicFoo;

		Sample( float const f ) ;
		~Sample( void ) ;
		
		void	publicBar( void ) const;

	private:
	
		int	_praivateFoo;

		void	_privateBar( void ) const;
};


#endif