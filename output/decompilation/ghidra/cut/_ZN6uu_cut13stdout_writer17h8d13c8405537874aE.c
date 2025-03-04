void _ZN6uu_cut13stdout_writer17h8d13c8405537874aE(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 local_30 [5];
  
  local_30[0] = _ZN3std2io5stdio6stdout17h077da66234850927E();
  cVar2 = _ZN3std3sys3pal4unix2io11is_terminal17hbf2c1ac3b0f72382E(local_30);
  if (cVar2 == '\0') {
    uVar1 = _ZN3std2io5stdio6stdout17h077da66234850927E();
    _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17h5f7624c4bb443e5bE
              (local_30,0x2000,uVar1);
    _ZN5alloc5boxed12Box_LT_T_GT_3new17h6d1e7df55fdb0aeeE(local_30);
  }
  else {
    uVar1 = _ZN3std2io5stdio6stdout17h077da66234850927E();
    _ZN5alloc5boxed12Box_LT_T_GT_3new17hdee3616ac8f247f5E(uVar1);
  }
  return;
}