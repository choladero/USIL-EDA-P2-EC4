template <typename T>
struct Greater
{
  bool operator()(T a, T b)
  {  return a >= b;
  }
};

struct Integer
{
  typedef int T;
  typedef Greater<T> Operation;
};

template <typename T>
struct Less
{
  bool operator()(T a, T b)
  { return a <= b;    
  }
};

struct Float
{
      typedef float T;
      typedef Less<T> Operation;
};

