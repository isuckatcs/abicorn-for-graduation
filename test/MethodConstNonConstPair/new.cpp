class C {
  void foo();
  void foo() const;
};

// CHECK-NOT: *
