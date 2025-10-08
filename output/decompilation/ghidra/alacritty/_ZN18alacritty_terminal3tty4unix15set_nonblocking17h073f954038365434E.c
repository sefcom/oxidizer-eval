void _ZN18alacritty_terminal3tty4unix15set_nonblocking17h073f954038365434E(ulong param_1)

{
  code *pcVar1;
  undefined *puVar2;
  uint uVar3;
  int local_44;
  undefined8 local_40 [6];
  
  puVar2 = PTR_fcntl_009e09d8;
  uVar3 = (*(code *)PTR_fcntl_009e09d8)(param_1,3,0);
  local_44 = (*(code *)puVar2)(param_1 & 0xffffffff,4,uVar3 | 0x800);
  if (local_44 == 0) {
    return;
  }
  local_40[0] = 0;
  (*(code *)PTR__ZN4core9panicking13assert_failed17h3b9fb3c288e5cdb1E_009e14d0)
            (0,&local_44,&DAT_001eb5d4,local_40,&PTR_s_alacritty_terminal_src_tty_unix__00997328);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}