void _ZN6uu_cut10cut_fields17h5b603ad8eeef3f36E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  undefined uVar2;
  char *pcVar3;
  code *pcVar4;
  long lVar5;
  char *pcVar6;
  undefined local_41;
  undefined local_40 [16];
  
  cVar1 = *(char *)(param_4 + 4);
  if (cVar1 != '\x02') {
    uVar2 = *(undefined *)(param_4 + 5);
    if (param_4[2] == 0) {
      pcVar3 = (char *)*param_4;
      lVar5 = 1;
      if (pcVar3 != (char *)0x0) {
        lVar5 = param_4[1];
      }
      pcVar6 = "\t";
      if (pcVar3 != (char *)0x0) {
        pcVar6 = pcVar3;
      }
      _ZN6uu_cut29cut_fields_explicit_out_delim17h0a90ca972983d44eE
                (param_1,&local_41,param_2,param_3,cVar1 != '\0',uVar2,pcVar6,lVar5);
    }
    else {
      local_40 = _ZN6uu_cut7matcher12ExactMatcher3new17h393e805b97031375E(param_4[2],param_4[3]);
      if (*param_4 == 0) {
        _ZN6uu_cut29cut_fields_implicit_out_delim17hc1fc3b9aa7195642E
                  (param_1,local_40,param_2,param_3,cVar1 != '\0',uVar2);
      }
      else {
        _ZN6uu_cut29cut_fields_explicit_out_delim17hf1ac07e2d7452ebcE
                  (param_1,local_40,param_2,param_3,cVar1 != '\0',uVar2,*param_4,param_4[1]);
      }
    }
    return;
  }
  _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_s_src_uu_cut_src_cut_rs_00228e10);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}