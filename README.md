# Проблема тестов
Перегрузил операторы `=` и `!=`, чтобы в тестах можно было писать вот так:
```c++
TEST(summComplex, expectedResult){
    ComplexNumber firstComplex = {6, 6};
    ComplexNumber secondComplex = {6, 10};
    ComplexNumber expectedResult = {12, 16};
    EXPECT_EQ(firstComplex + secondComplex, expectedResult);
}
```
Но так это не работает, выдает ошибку при компиляции:
```
In file included from /cygdrive/d/ykrop/Desktop/Study/Second course/OOP/Overloading/tests.cpp:5:0:
/cygdrive/d/ykrop/Desktop/Study/Second course/OOP/Overloading/googletest/googletest/include/gtest/gtest.h: In instantiation of 'testing::AssertionResult testing::internal::CmpHelperEQ(const char*, const char*, const T1&, const T2&) [with T1 = ComplexNumber; T2 = ComplexNumber]':
/cygdrive/d/ykrop/Desktop/Study/Second course/OOP/Overloading/googletest/googletest/include/gtest/gtest.h:1554:23:   required from 'static testing::AssertionResult testing::internal::EqHelper::Compare(const char*, const char*, const T1&, const T2&) [with T1 = ComplexNumber; T2 = ComplexNumber; typename std::enable_if<((! std::is_integral<_Tp>::value) || (! std::is_pointer<_Dp>::value))>::type* <anonymous> = 0]'
/cygdrive/d/ykrop/Desktop/Study/Second course/OOP/Overloading/tests.cpp:14:5:   required from here
/cygdrive/d/ykrop/Desktop/Study/Second course/OOP/Overloading/googletest/googletest/include/gtest/gtest.h:1527:11: error: no match for 'operator==' (operand types are 'const ComplexNumber' and 'const ComplexNumber')
   if (lhs == rhs) {
       ~~~~^~~~~~
/cygdrive/d/ykrop/Desktop/Study/Second course/OOP/Overloading/googletest/googletest/include/gtest/gtest.h:1518:13: note: candidate: bool testing::internal::operator==(testing::internal::faketype, testing::internal::faketype)
 inline bool operator==(faketype, faketype) { return true; }
             ^~~~~~~~
/cygdrive/d/ykrop/Desktop/Study/Second course/OOP/Overloading/googletest/googletest/include/gtest/gtest.h:1518:13: note:   no known conversion for argument 1 from 'const ComplexNumber' to 'testing::internal::faketype'
make[3]: *** [CMakeFiles/tests.dir/build.make:63: CMakeFiles/tests.dir/tests.cpp.o] Error 1
make[2]: *** [CMakeFiles/Makefile2:80: CMakeFiles/tests.dir/all] Error 2
make[1]: *** [CMakeFiles/Makefile2:87: CMakeFiles/tests.dir/rule] Error 2
make: *** [Makefile:175: tests] Error 2
```
Поэтому сделал по тупому,**если подскажите как сделать правильно, с радостью переделаю!**
