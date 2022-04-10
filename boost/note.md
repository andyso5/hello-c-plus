## 类型转换
1. 传给c++函数list [pybind传输list](https://www.wangt.cc/2020/12/pybind%E4%BC%A0%E8%BE%93list/)

2.


## 添加__doc__
```
PYBIND11_MODULE(example,m)
{
  m.doc() = "pybind11 example plugin";
  m.def("multiply", &py_multiply, "Convert all entries of an 1-D NumPy-array to int and multiply by 10");
}
```