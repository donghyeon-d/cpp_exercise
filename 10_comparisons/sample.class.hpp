#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

	public:

		Sample(int const a);
		~Sample(void);
		
		int	getFoo(void) const; // const : 함수 내부에서 변수를 바꿀 수 없음
		int	compare(Sample *other) const;

	private:
	
		int	_foo;

};


#endif