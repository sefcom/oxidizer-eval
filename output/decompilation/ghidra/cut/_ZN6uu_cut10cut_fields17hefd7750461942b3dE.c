void _ZN6uu_cut10cut_fields17hefd7750461942b3dE
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
               long *param_5)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  undefined local_49;
  undefined8 local_48;
  undefined local_40 [16];
  
  cVar1 = *(char *)(param_5 + 4);
  if (cVar1 != '\x02') {
    cVar2 = *(char *)(param_5 + 5);
    pcVar4 = (char *)param_5[2];
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)*param_5;
      lVar5 = 1;
      if (pcVar4 != (char *)0x0) {
        lVar5 = param_5[1];
      }
      pcVar6 = "\t";
      if (pcVar4 != (char *)0x0) {
        pcVar6 = pcVar4;
      }
      _ZN6uu_cut29cut_fields_explicit_out_delim17h01165510980ce6dcE
                (param_1,param_2,&local_49,param_3,param_4,cVar1,cVar2,pcVar6,lVar5);
    }
    else if ((param_5[3] == 1) && (*pcVar4 == cVar2)) {
      lVar5 = 1;
      if ((char *)*param_5 != (char *)0x0) {
        lVar5 = param_5[1];
        pcVar4 = (char *)*param_5;
      }
      _ZN6uu_cut29cut_fields_newline_char_delim17h70d6109e474d67d6E
                (param_1,*param_2,param_2[1],param_3,param_4,cVar2,pcVar4,lVar5);
    }
    else {
      local_48 = param_4;
      local_40 = _ZN6uu_cut7matcher12ExactMatcher3new17h2730585d9170e560E(pcVar4,param_5[3]);
      if (*param_5 == 0) {
        _ZN6uu_cut29cut_fields_implicit_out_delim17hf56b39c99b8eafb6E
                  (param_1,param_2,local_40,param_3,local_48,cVar1,cVar2);
      }
      else {
        _ZN6uu_cut29cut_fields_explicit_out_delim17h718b4fa483b7739eE
                  (param_1,param_2,local_40,param_3,local_48,cVar1,cVar2,*param_5,param_5[1]);
      }
    }
    return;
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001ffec0)
            (&PTR_s_src_uu_cut_src_cut_rs_001f9328);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}