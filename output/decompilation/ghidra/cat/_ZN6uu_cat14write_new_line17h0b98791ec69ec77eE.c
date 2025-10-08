void _ZN6uu_cat14write_new_line17h0b98791ec69ec77eE
               (long *param_1,undefined8 param_2,char *param_3,long param_4,undefined param_5)

{
  long lVar1;
  long local_48;
  long lStack_40;
  long local_38;
  
  if (*(char *)(param_4 + 0x39) == '\0') {
    if (*(char *)(param_4 + 0x38) == '\0') {
      *(undefined *)(param_4 + 0x3a) = 1;
      if (param_3[2] != '\0') goto LAB_0015fc90;
LAB_0015fcee:
      _ZN6uu_cat17write_end_of_line17h1af273733bdb3f49E(&local_48,param_2,"\n",1,param_5);
    }
    else {
      if ((*param_3 == '\x01') && (*(char *)(param_4 + 0x3a) == '\x01')) goto LAB_0015fd43;
      *(undefined *)(param_4 + 0x3a) = 1;
      if (param_3[4] == '\x02') {
        lVar1 = _ZN6uu_cat10LineNumber5write17h9eeedfd1c7640e65E(param_4);
        if (lVar1 != 0) goto LAB_0015fcd6;
        _ZN6uu_cat10LineNumber9increment17hc9558597a4dcfd2dE(param_4);
      }
      if (param_3[2] == '\0') goto LAB_0015fcee;
LAB_0015fc90:
      _ZN6uu_cat17write_end_of_line17h1af273733bdb3f49E(&local_48,param_2,"$\n",2,param_5);
    }
    if (local_48 != -0x7ffffffffffffffa) {
      param_1[1] = lStack_40;
      param_1[2] = local_38;
      *param_1 = local_48;
      return;
    }
LAB_0015fd43:
    *param_1 = -0x7ffffffffffffffa;
  }
  else {
    if (param_3[2] == '\0') {
      lVar1 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h4762d2070cade9bdE
                        (param_2,"\r",1);
      if (lVar1 == 0) {
        *(undefined *)(param_4 + 0x39) = 0;
        _ZN6uu_cat17write_end_of_line17h1af273733bdb3f49E(&local_48,param_2,"\n",1,param_5);
        goto joined_r0x0015fd41;
      }
    }
    else {
      lVar1 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h4762d2070cade9bdE
                        (param_2,"^M",2);
      if (lVar1 == 0) {
        *(undefined *)(param_4 + 0x39) = 0;
        _ZN6uu_cat17write_end_of_line17h1af273733bdb3f49E(&local_48,param_2,"$\n",2,param_5);
joined_r0x0015fd41:
        if (local_48 != -0x7ffffffffffffffa) {
          param_1[2] = local_38;
          *param_1 = local_48;
          param_1[1] = lStack_40;
          return;
        }
        goto LAB_0015fd43;
      }
    }
LAB_0015fcd6:
    *param_1 = -0x8000000000000000;
    param_1[1] = lVar1;
  }
  return;
}