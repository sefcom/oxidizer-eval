bool _ZN7uu_tail6follow5files12FileHandling15files_remaining17h86d5a5f2d15f0cfdE(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined auStack_58 [40];
  
  _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_4iter17hd64d950704f7a77fE
            (auStack_58,param_1 + 0x18);
  do {
    lVar4 = _ZN92__LT_hashbrown__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h2eaa0b924946ce33E
                      (auStack_58);
    if (lVar4 == 0) break;
    uVar1 = *(undefined8 *)(lVar4 + 8);
    uVar2 = *(undefined8 *)(lVar4 + 0x10);
    cVar3 = _ZN63__LT_std__path__Path_u20_as_u20_uu_tail__paths__PathExtTail_GT_11is_tailable17hfd31d73cfedfa97dE
                      (uVar1,uVar2);
    if (cVar3 != '\0') break;
    cVar3 = _ZN63__LT_std__path__Path_u20_as_u20_uu_tail__paths__PathExtTail_GT_8is_stdin17h7b78c224abf6fd98E
                      (uVar1,uVar2);
  } while (cVar3 == '\0');
  return lVar4 != 0;
}