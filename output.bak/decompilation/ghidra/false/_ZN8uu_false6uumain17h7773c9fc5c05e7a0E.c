void __rustcall uu_false::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_disable_rust_signal_handlers_001fb490)();
  core::result::Result<T,E>::expect(uVar1);
  uumain::uumain(param_1,param_2);
  (*(code *)PTR_get_exit_code_001fb498)();
  return;
}