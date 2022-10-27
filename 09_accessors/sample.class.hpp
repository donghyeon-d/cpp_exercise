#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

	public:

		Sample(void);
		~Sample(void);
		
		int		getFoo(void) const; // const : 함수 내부에서 변수를 바꿀 수 없음
		void	setFoo(int v);

	private:
	
		int	_foo;

};


#endif