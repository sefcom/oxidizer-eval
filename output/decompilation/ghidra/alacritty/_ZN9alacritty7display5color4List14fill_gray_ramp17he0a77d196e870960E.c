void _ZN9alacritty7display5color4List14fill_gray_ramp17he0a77d196e870960E
               (long param_1,long param_2,long param_3)

{
  undefined2 *puVar1;
  char cVar2;
  char *pcVar3;
  char cVar4;
  char local_41;
  long local_40;
  long local_38;
  
  pcVar3 = (char *)(param_1 + 0x2b8);
  cVar2 = '\b';
  cVar4 = -0x18;
  do {
    while (local_41 = cVar4, local_40 = param_2, local_38 = param_2 + param_3 * 4,
          puVar1 = (undefined2 *)
                   _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4find17h215505a183a9d6f4E
                             (&local_40,&local_41), puVar1 != (undefined2 *)0x0) {
      pcVar3[2] = *(char *)(puVar1 + 1);
      *(undefined2 *)pcVar3 = *puVar1;
      pcVar3 = pcVar3 + 3;
      cVar2 = cVar2 + '\n';
      cVar4 = cVar4 + '\x01';
      if (cVar4 == '\0') {
        return;
      }
    }
    *pcVar3 = cVar2;
    pcVar3[1] = cVar2;
    pcVar3[2] = cVar2;
    pcVar3 = pcVar3 + 3;
    cVar2 = cVar2 + '\n';
    cVar4 = cVar4 + '\x01';
  } while (cVar4 != '\0');
  return;
}