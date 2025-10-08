int _ZN21ruff_python_formatter8comments9placement15max_empty_lines17h787bd2fd7fcb014fE
              (undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined local_64 [8];
  byte local_5c;
  undefined local_58 [48];
  
  if (param_2 >> 0x20 != 0) {
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h1e98140e442e0df8E(1,&DAT_0067cc48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar3 = 0;
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h1e98140e442e0df8E(0,&DAT_0067cc48);
  (*(code *)PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
            (local_58,param_1,param_2,0,param_2 & 0xffffffff);
  puVar2 = 
  PTR__ZN105__LT_ruff_python_trivia__tokenizer__SimpleTokenizer_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h7bb75a5db8d15488E_006bd978
  ;
  do {
    iVar5 = 0;
LAB_0040496d:
    while ((*(code *)puVar2)(local_64,local_58), 3 < local_5c) {
      if (local_5c != 4) {
        if (local_5c == 0x5a) goto LAB_004049a9;
        goto LAB_0040499e;
      }
      iVar5 = iVar5 + 1;
    }
    if (local_5c != 0) break;
    uVar3 = _ZN4core3cmp3Ord3max17ha63d121e4ef68b69E(iVar5,uVar3);
  } while( true );
  if (local_5c != 1) {
LAB_0040499e:
    uVar3 = _ZN4core3cmp3Ord3max17ha63d121e4ef68b69E(iVar5,uVar3);
LAB_004049a9:
    iVar4 = _ZN4core3cmp3Ord3max17ha63d121e4ef68b69E(iVar5,uVar3);
    iVar5 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    return iVar5;
  }
  goto LAB_0040496d;
}