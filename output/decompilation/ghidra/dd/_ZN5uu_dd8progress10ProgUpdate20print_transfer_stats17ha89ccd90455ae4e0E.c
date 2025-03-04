undefined1 *
_ZN5uu_dd8progress10ProgUpdate20print_transfer_stats17ha89ccd90455ae4e0E
          (undefined8 param_1,undefined4 param_2)

{
  undefined auVar1 [16];
  undefined1 *local_8;
  
  local_8 = _ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
  auVar1 = _ZN5uu_dd8progress10ProgUpdate20write_transfer_stats17h72fbc0aa2e615bbeE
                     (param_1,&local_8,param_2);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hfd1ba91060291f04E
            (auVar1._0_8_,auVar1._8_8_,&PTR_s_src_uu_dd_src_progress_rs_002624e8);
  return local_8;
}