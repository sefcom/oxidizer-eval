undefined8 *
_ZN9uu_numfmt13parse_options17hdd4028f9a896523fE(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined local_178 [136];
  undefined8 local_f0;
  undefined uStack_e8;
  undefined7 uStack_e7;
  undefined uStack_e0;
  undefined7 uStack_df;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf5a604ebb31d81afE
            (local_178,param_2,"from",4);
  lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h00661b2bfd48ffd9E
                    ("from",4,local_178);
  if (lVar2 != 0) {
    _ZN9uu_numfmt10parse_unit17h5b8dda5b61233202E
              (&local_f0,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
    param_1[3] = CONCAT71(uStack_df,uStack_e0);
    *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_e0,uStack_e7);
    param_1[1] = local_f0;
    *(undefined *)(param_1 + 2) = uStack_e8;
    *param_1 = 2;
    return param_1;
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00209978)(&DAT_00202880);
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00209978)(&DAT_00202898);
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00209978)(&DAT_002028b0);
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00209978)(&DAT_002028c8);
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00209978)(&DAT_002028f8);
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00209978)(&DAT_002028e0);
  (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_002097b0)(8,0x10);
                    /* try { // try from 0016d2b9 to 0016d2c5 has its CatchHandler @ 0016d335 */
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00209978)(&DAT_00202910);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}