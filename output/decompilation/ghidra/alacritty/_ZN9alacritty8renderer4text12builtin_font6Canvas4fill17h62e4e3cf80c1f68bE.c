void _ZN9alacritty8renderer4text12builtin_font6Canvas4fill17h62e4e3cf80c1f68bE
               (long param_1,long param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  long lStack_28;
  long lStack_20;
  
  lStack_20 = param_2 * 3 + param_1;
  lStack_28 = param_1;
  puVar1 = (undefined2 *)
           _ZN94__LT_core__slice__iter__IterMut_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hcd8f69deb750b40dE
                     (&lStack_28);
  while (puVar1 != (undefined2 *)0x0) {
    *puVar1 = (short)param_3;
    *(char *)(puVar1 + 1) = (char)((uint)param_3 >> 0x10);
    puVar1 = (undefined2 *)
             _ZN94__LT_core__slice__iter__IterMut_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hcd8f69deb750b40dE
                       (&lStack_28);
  }
  return;
}