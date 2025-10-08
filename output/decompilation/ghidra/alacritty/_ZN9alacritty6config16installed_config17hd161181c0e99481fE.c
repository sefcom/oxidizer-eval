void _ZN9alacritty6config16installed_config17hd161181c0e99481fE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auStack_138 [24];
  undefined8 *local_120;
  code *local_118;
  undefined8 local_108;
  undefined8 local_100;
  undefined local_f8 [24];
  undefined **local_e0;
  undefined8 local_d8;
  undefined8 **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  
  local_120 = &local_108;
  local_118 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hde322f69d68256c4E;
  local_e0 = &PTR_DAT_00981f80;
  local_d8 = 1;
  local_c0 = 0;
  local_d0 = &local_120;
  local_c8 = 1;
  local_108 = param_2;
  local_100 = param_3;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E(auStack_138,0,param_3,&local_e0)
  ;
                    /* try { // try from 0054457b to 00544584 has its CatchHandler @ 005445d4 */
  _ZN3xdg16base_directories15BaseDirectories8with_env17h17a1f3f28c4a7b5dE(&local_e0);
                    /* try { // try from 00544585 to 005445b8 has its CatchHandler @ 005445e7 */
  _ZN3xdg16base_directories15BaseDirectories16find_config_file17h2e314d890ad5ed70E
            (&local_120,&local_e0,auStack_138);
  _ZN4core6option15Option_LT_T_GT_7or_else17hd003a5435b01cfe4E(local_f8,&local_120,auStack_138);
  _ZN4core6option15Option_LT_T_GT_7or_else17h22cfc7b08372667fE(param_1,local_f8,auStack_138);
  _ZN4core3ptr59drop_in_place_LT_xdg__base_directories__BaseDirectories_GT_17hfbd973180228c1c0E
            (&local_e0);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(auStack_138);
  return;
}