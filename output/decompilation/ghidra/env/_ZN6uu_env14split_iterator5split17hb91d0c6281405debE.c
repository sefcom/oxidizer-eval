int * _ZN6uu_env14split_iterator5split17hb91d0c6281405debE(int *param_1)

{
  int local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined local_68 [88];
  
  (*(code *)PTR__ZN6uu_env14split_iterator13SplitIterator3new17h95a2d9123d89c82eE_002192f0)
            (local_68);
  (*(code *)PTR__ZN6uu_env14split_iterator13SplitIterator5split17hfc15653a1cb24dc8E_00219338)
            (&local_90,local_68);
  if (local_90 == 0xc) {
    *(undefined8 *)(param_1 + 6) = local_78;
    *(ulong *)(param_1 + 2) = CONCAT44(uStack_84,local_88);
    *(ulong *)(param_1 + 4) = CONCAT44(uStack_7c,uStack_80);
  }
  else {
    *(ulong *)(param_1 + 4) = CONCAT44(uStack_7c,uStack_80);
    *(undefined8 *)(param_1 + 6) = local_78;
    *(ulong *)(param_1 + 1) = CONCAT44(local_88,uStack_8c);
    *(ulong *)(param_1 + 3) = CONCAT44(uStack_80,uStack_84);
    *(undefined8 *)(param_1 + 8) = local_70;
  }
  *param_1 = local_90;
  return param_1;
}