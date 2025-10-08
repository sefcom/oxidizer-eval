bool _ZN7uu_tail6follow5files12FileHandling15files_remaining17h4da9cfafa6cde0f6E(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  undefined auStack_48 [40];
  
  _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_4iter17h2ecde493e204e080E
            (auStack_48,param_1 + 0x18);
  puVar2 = 
  PTR__ZN63__LT_std__path__Path_u20_as_u20_uu_tail__paths__PathExtTail_GT_11is_tailable17h8ddebe59fac1e02eE_0027d850
  ;
  puVar1 = 
  PTR__ZN63__LT_std__path__Path_u20_as_u20_uu_tail__paths__PathExtTail_GT_8is_stdin17h9c895f48d1ad1ebfE_0027d840
  ;
  do {
    lVar4 = _ZN92__LT_hashbrown__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hddac6c5de2dafa38E
                      (auStack_48);
    if (lVar4 == 0) break;
    cVar3 = (*(code *)puVar2)(*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
    if (cVar3 != '\0') break;
    cVar3 = (*(code *)puVar1)(*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
  } while (cVar3 == '\0');
  return lVar4 != 0;
}