undefined8
_ZN2fd12regex_helper36hir_matches_strings_with_leading_dot17hfeacf4fb520ade2bE(int *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  
  if ((*param_1 == 8) && (lVar1 = *(long *)(param_1 + 6), lVar1 != 0)) {
    puVar2 = *(undefined8 **)(param_1 + 4);
    cVar3 = _ZN67__LT_regex_syntax__hir__HirKind_u20_as_u20_core__cmp__PartialEq_GT_2eq17hab2ad8a19f5e3ee9E
                      (*puVar2,*(undefined4 *)(puVar2 + 1));
    if ((lVar1 != 1) && ((cVar3 != '\0' && (*(int *)(puVar2 + 6) == 3)))) {
      uVar4 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf20ef8fd404ea81dE
                        (puVar2[7],puVar2[8],"./",1);
      return uVar4;
    }
  }
  return 0;
}