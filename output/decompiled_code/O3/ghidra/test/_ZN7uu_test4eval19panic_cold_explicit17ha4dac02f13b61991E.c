void __rustcall uu_test::eval::panic_cold_explicit(void)

{
  code *pcVar1;
  
  core::panicking::panic_explicit(&PTR_DAT_00215338);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}