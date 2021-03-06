// To generate the corresponding EXE/PDB, run:
// cl /Zi test.cpp

namespace NS {
struct Foo {
  void bar() {}
};
}

void foo() {
}

static void private_symbol() {
}

int main() {
  foo();
  
  NS::Foo f;
  f.bar();
  cout<<"Adding change 1"<<endl;
  private_symbol();
}

extern "C" {
void __cdecl foo_cdecl() {}
void __stdcall foo_stdcall() {}
void __fastcall foo_fastcall() {}
void __vectorcall foo_vectorcall() {}
cout<<"Adding change 2"<<endl;
}
