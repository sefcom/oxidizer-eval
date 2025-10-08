void _ZN2rg5flags6hiargs5State3new17h193f40371f2d9d77E(undefined8 *param_1)

{
  undefined uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00527058)();
  uVar1 = _ZN3std3sys2io11is_terminal6isatty11is_terminal17h5a307767fb64e049E();
  _ZN2rg5flags6hiargs11current_dir17hccfc382326763d75E(&local_28);
  param_1[2] = local_18;
  *(undefined *)(param_1 + 3) = uVar1;
  *(undefined *)((long)param_1 + 0x19) = 0;
  param_1[1] = local_20;
  *param_1 = local_28;
  return;
}