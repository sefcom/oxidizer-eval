void _ZN21ruff_python_formatter7context28WithIndentLevel_LT_B_C_D_GT_3new17hdff497fb90141998E
               (undefined8 *param_1,undefined2 param_2,undefined8 *param_3)

{
  undefined2 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = param_3[1];
  _ZN101__LT_ruff_python_formatter__context__WithNodeLevel_LT_B_GT__u20_as_u20_core__ops__deref__DerefMut_GT_9deref_mut17hacf31004928f97fbE
            (uVar2);
                    /* try { // try from 0040657b to 00406582 has its CatchHandler @ 004065a2 */
  lVar3 = _ZN102__LT_ruff_formatter__formatter__Formatter_LT_Context_GT__u20_as_u20_ruff_formatter__buffer__Buffer_GT_9state_mut17h7cd8bbe615791599E
                    (uVar2);
  uVar1 = *(undefined2 *)(lVar3 + 0x28);
  *(undefined2 *)(lVar3 + 0x28) = param_2;
  uVar2 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar2;
  *(undefined2 *)(param_1 + 2) = uVar1;
  return;
}