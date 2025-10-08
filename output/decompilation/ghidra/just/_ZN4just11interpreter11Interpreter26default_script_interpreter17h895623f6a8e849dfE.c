void _ZN4just11interpreter11Interpreter26default_script_interpreter17h895623f6a8e849dfE(void)

{
  int iVar1;
  undefined1 *puStack_10;
  undefined1 **ppuStack_8;
  
  iVar1 = _ZN4core4sync6atomic11atomic_load17h03514060a39ee4d7E(0x569c98);
  if (iVar1 == 3) {
    return;
  }
  puStack_10 = 
  _ZN4just11interpreter11Interpreter26default_script_interpreter8INSTANCE17h2296fe7f4ab02c14E;
  ppuStack_8 = &puStack_10;
  (*(code *)PTR__ZN3std3sys4sync4once5futex4Once4call17h57a40b575c18b3a5E_00566300)
            (0x569c98,0,&ppuStack_8,&DAT_0052c0d8,&PTR_s__rustc_bf64d66bd58719fac2585eae5_00530118);
  return;
}