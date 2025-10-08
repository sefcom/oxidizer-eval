undefined8
_ZN10uu_install27is_potential_directory_path17h7ceb262fd8e27effE(long param_1,long param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (char *)(param_1 + param_2 + -1);
  if ((pcVar1 != (char *)0x0 && param_2 != 0) && (*pcVar1 == '/')) {
    return CONCAT71((int7)((ulong)pcVar1 >> 8),1);
  }
  uVar2 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_00209c20)();
  return uVar2;
}