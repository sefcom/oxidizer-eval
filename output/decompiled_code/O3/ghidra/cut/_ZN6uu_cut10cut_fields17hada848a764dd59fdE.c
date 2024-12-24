void __rustcall
uu_cut::cut_fields(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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
      pcVar6 = "\t";
      if (pcVar3 != (char *)0x0) {
        pcVar6 = pcVar3;
      }
      lVar5 = 1;
      if (pcVar3 != (char *)0x0) {
        lVar5 = param_4[1];
      }
      cut_fields_explicit_out_delim
                (param_1,&local_41,param_2,param_3,cVar1 != '\0',uVar2,pcVar6,lVar5);
    }
    else {
      local_40 = matcher::ExactMatcher::new(param_4[2],param_4[3]);
      if (*param_4 == 0) {
        cut_fields_implicit_out_delim(param_1,local_40,param_2,param_3,cVar1 != '\0',uVar2);
      }
      else {
        cut_fields_explicit_out_delim
                  (param_1,local_40,param_2,param_3,cVar1 != '\0',uVar2,*param_4,param_4[1]);
      }
    }
    return;
  }
  core::option::unwrap_failed(&PTR_s_src_uu_cut_src_cut_rs_00229e60);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}