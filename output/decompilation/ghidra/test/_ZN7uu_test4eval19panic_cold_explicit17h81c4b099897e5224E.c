void _ZN7uu_test4eval19panic_cold_explicit17h81c4b099897e5224E(void)

{
  code *pcVar1;
  
  _ZN4core9panicking14panic_explicit17heeed6135bff7655bE(&PTR_DAT_00214c38);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}