void _ZN3bat16invoke_bugreport17hbb57d0e784864937E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined *puStack_190;
  undefined8 local_188;
  char *pcStack_180;
  undefined8 local_178;
  undefined *puStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined *puStack_140;
  undefined8 local_138;
  char *pcStack_130;
  undefined8 local_128;
  undefined *puStack_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined *puStack_f0;
  undefined8 local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  long local_80;
  undefined local_78 [24];
  undefined local_60 [64];
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5d802d13d527b428E
            (&local_1a8,param_1,&DAT_00185409,5);
  auVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf7d617d7cf213b9eE
                     (&DAT_00185409,5,&local_1a8);
  uVar2 = auVar4._8_8_;
  lVar1 = auVar4._0_8_;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
  }
  (*(code *)PTR__ZN3bat6config20get_pager_executable17h08ad46b3efb251cfE_00807b30)
            (&local_1a8,uVar3,uVar2);
  local_a8 = local_198;
  local_b8 = (undefined4)local_1a8;
  uStack_b4 = local_1a8._4_4_;
  uStack_b0 = (undefined4)uStack_1a0;
  uStack_ac = uStack_1a0._4_4_;
                    /* try { // try from 004af6a7 to 004af6ba has its CatchHandler @ 004af9f7 */
  (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00807948)
            (&local_98,param_2,param_3);
                    /* try { // try from 004af6bb to 004af770 has its CatchHandler @ 004afa30 */
  _ZN3std4path7PathBuf4push17h74e7191f088163e5E(&local_98,"metadata.yaml",0xd);
  local_1a8 = 0;
  uStack_1a0 = 8;
  local_198 = 0;
  puStack_190 = &DAT_00185ea3;
  local_188 = 3;
  pcStack_180 = "0.25.0Clearing  ... okay\nskipped (not present)\n";
  local_178 = 6;
  puStack_170 = &DAT_00185e81;
  local_168 = 0x15;
  local_158 = 0x8000000000000000;
  _ZN9bugreport9BugReport4info17h1e481c9f919ea487E(&local_108,&local_1a8,&local_158);
  _ZN9bugreport9BugReport4info17hd8e986c2063a2184E(&local_1a8,&local_108);
  _ZN9bugreport9BugReport4info17hda25a35822c6bb91E(&local_108,&local_1a8);
                    /* try { // try from 004af771 to 004af77a has its CatchHandler @ 004af9e5 */
  _ZN9bugreport9collector20EnvironmentVariables4list17h99ce80883b1c4a52E(&local_158);
                    /* try { // try from 004af77b to 004af78f has its CatchHandler @ 004af9e3 */
  _ZN9bugreport9BugReport4info17h5081d61b56236a31E(&local_1a8,&local_108,&local_158);
                    /* try { // try from 004af790 to 004af7ba has its CatchHandler @ 004afa0e */
  _ZN3bat6config18system_config_file17h5269a0222f7ffe0aE(&local_108);
  _ZN9bugreport9collector11FileContent3new17hd1d20b8dc58ffe21E
            (&local_158,"System Config file",0x12,&local_108);
                    /* try { // try from 004af7bb to 004af7cf has its CatchHandler @ 004af9e1 */
  _ZN9bugreport9BugReport4info17hb38456a8c737cd82E(&local_108,&local_1a8,&local_158);
                    /* try { // try from 004af7d0 to 004af7f0 has its CatchHandler @ 004af9fc */
  _ZN3bat6config11config_file17h4b67a380f7fc9337E(&local_1a8);
  _ZN9bugreport9collector11FileContent3new17hd1d20b8dc58ffe21E
            (&local_158,"Config file",0xb,&local_1a8);
                    /* try { // try from 004af7f1 to 004af805 has its CatchHandler @ 004af9df */
  _ZN9bugreport9BugReport4info17hb38456a8c737cd82E(&local_1a8,&local_108,&local_158);
  local_f8 = local_88;
  local_108 = local_98;
  uStack_104 = uStack_94;
  uStack_100 = uStack_90;
  uStack_fc = uStack_8c;
                    /* try { // try from 004af826 to 004af843 has its CatchHandler @ 004af9d2 */
  _ZN9bugreport9collector11FileContent3new17hd1d20b8dc58ffe21E
            (&local_158,"Custom assets metadata",0x16,&local_108);
                    /* try { // try from 004af844 to 004af858 has its CatchHandler @ 004af9d0 */
  _ZN9bugreport9BugReport4info17hb38456a8c737cd82E(&local_108,&local_1a8,&local_158);
                    /* try { // try from 004af859 to 004af868 has its CatchHandler @ 004af9be */
  _ZN9bugreport9collector17directory_entries16DirectoryEntries3new17h9b3f6a72ea062eecE
            (&local_158,param_2,param_3);
                    /* try { // try from 004af869 to 004af87d has its CatchHandler @ 004af9bc */
  _ZN9bugreport9BugReport4info17hd823bbbac3c285faE(&local_1a8,&local_108,&local_158);
                    /* try { // try from 004af87e to 004af88a has its CatchHandler @ 004af9ba */
  _ZN9bugreport9BugReport4info17h67af60d6f46ccabbE(&local_158,&local_1a8);
                    /* try { // try from 004af88b to 004af8b9 has its CatchHandler @ 004afa1b */
  _ZN8grep_cli10decompress14resolve_binary17h3ce6d5484a4c340dE(&local_80,&local_b8);
  if (local_80 == 0) {
    local_168 = local_118;
    local_178 = local_128;
    puStack_170 = puStack_120;
    local_188 = local_138;
    pcStack_180 = pcStack_130;
    local_198 = local_148;
    puStack_190 = puStack_140;
    local_1a8 = local_158;
    uStack_1a0 = CONCAT44(uStack_14c,uStack_150);
                    /* try { // try from 004af8fe to 004af90a has its CatchHandler @ 004af992 */
    _ZN9bugreport9collector13CommandOutput3new17hd009733d97589f24E(local_60,local_78);
                    /* try { // try from 004af90b to 004af922 has its CatchHandler @ 004af98d */
    _ZN9bugreport9BugReport4info17h7c29cf3324f110d6E(&local_108,&local_1a8,local_60);
    local_158 = CONCAT44(uStack_104,local_108);
    uStack_150 = uStack_100;
    uStack_14c = uStack_fc;
    local_148 = local_f8;
    puStack_140 = puStack_f0;
    local_138 = local_e8;
    pcStack_130 = pcStack_e0;
    local_128 = local_d8;
    puStack_120 = puStack_d0;
    local_118 = local_c8;
  }
  else {
    _ZN4core3ptr101drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_grep_cli__process__CommandError_GT__GT_17hde1b8028382593dcE
              (&local_80);
  }
                    /* try { // try from 004af96a to 004af973 has its CatchHandler @ 004afa1b */
  _ZN9bugreport9BugReport5print17h4dce026a437099b7E(&local_158);
  _ZN4core3ptr41drop_in_place_LT_bugreport__BugReport_GT_17h52a8d52b97a7bb19E(&local_158);
  return;
}