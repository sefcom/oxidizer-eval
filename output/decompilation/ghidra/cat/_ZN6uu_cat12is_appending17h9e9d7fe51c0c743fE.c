byte _ZN6uu_cat12is_appending17h9e9d7fe51c0c743fE(void)

{
  byte bVar1;
  uint extraout_EDX;
  undefined4 local_10 [4];
  
  (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001f2388)();
  local_10[0] = 4;
  bVar1 = (*(code *)PTR__ZN3nix5fcntl5fcntl17h43fde6b36e45e569E_001f2530)(1,local_10);
  return ~bVar1 & (byte)(extraout_EDX >> 10) & 1;
}