void _ZN9alacritty2gl16missing_fn_panic17h74aefa71347b4c5eE(void)

{
  code *pcVar1;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_30 = &DAT_00986f10;
  local_28 = 1;
  local_20 = 8;
  local_18 = 0;
  uStack_10 = 0;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_009de0e0)(&local_30,&DAT_00986f20);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}