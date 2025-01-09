undefined  [16] __rustcall uu_od::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined uVar2;
  undefined auVar3 [16];
  undefined auStack_498 [8];
  undefined8 local_490;
  undefined8 local_488;
  long local_480;
  undefined8 local_478;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  long local_428;
  undefined8 uStack_420;
  long local_418;
  undefined8 local_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  long local_3c0;
  ulong uStack_3b8;
  long local_3b0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined local_378 [24];
  undefined local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  long *local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined local_320;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined local_2d8 [712];
  
  uucore::Args::collect_ignore(auStack_498,param_1,param_2);
                    /* try { // try from 001772c8 to 00177312 has its CatchHandler @ 0017759f */
  (*(code *)PTR_uu_app_002471e0)(local_2d8);
  clap_builder::builder::command::Command::try_get_matches_from(&local_418,local_2d8,auStack_498);
  if (local_418 == -0x8000000000000000) {
    auVar3 = (*(code *)PTR_from_002471e8)();
  }
  else {
    local_390 = local_3f8;
    uStack_38c = uStack_3f4;
    uStack_388 = uStack_3f0;
    uStack_384 = uStack_3ec;
    local_3a0 = local_408;
    uStack_39c = uStack_404;
    uStack_398 = uStack_400;
    uStack_394 = uStack_3fc;
    local_3b0 = local_418;
    local_3a8 = local_410;
                    /* try { // try from 00177368 to 0017737d has its CatchHandler @ 0017758d */
    (*(code *)PTR_new_002471f0)(&local_418,&local_3b0,local_490,local_488);
    auVar3._12_4_ = uStack_404;
    auVar3._8_4_ = local_408;
    auVar3._0_8_ = local_410;
    if (local_418 == 2) {
                    /* try { // try from 0017739c to 001773a8 has its CatchHandler @ 0017759f */
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_3b0);
    }
    else {
      local_428 = local_3c0;
      uStack_420 = uStack_3b8;
      uVar1 = uStack_420;
      local_438 = local_3d0;
      uStack_434 = uStack_3cc;
      uStack_430 = uStack_3c8;
      uStack_42c = uStack_3c4;
      local_448 = local_3e0;
      uStack_444 = uStack_3dc;
      uStack_440 = uStack_3d8;
      uStack_43c = uStack_3d4;
      local_458 = uStack_3f0;
      uStack_454 = uStack_3ec;
      uStack_450 = local_3e8;
      uStack_44c = uStack_3e4;
      local_468 = uStack_400;
      uStack_464 = uStack_3fc;
      uStack_460 = local_3f8;
      uStack_45c = uStack_3f4;
      local_480 = local_418;
      local_478 = local_410;
      uStack_420._2_1_ = (undefined)(uStack_3b8 >> 0x10);
      local_360 = uStack_420._2_1_;
                    /* try { // try from 00177436 to 00177449 has its CatchHandler @ 0017755a */
      uStack_420 = uVar1;
      (*(code *)PTR_open_input_peek_reader_002471f8)
                (&local_418,CONCAT44(uStack_3ec,uStack_3f0),CONCAT44(uStack_3e4,local_3e8),
                 CONCAT44(uStack_3c4,uStack_3c8),local_418,local_410);
      uVar2 = uStack_420._1_1_;
                    /* try { // try from 00177458 to 00177464 has its CatchHandler @ 0017755f */
      _<u8_as_alloc::vec::spec_from_elem::SpecFromElem>::from_elem(&local_310,local_428 + 4);
      local_358 = local_310;
      uStack_350 = uStack_308;
      local_348 = local_300;
      local_338 = 4;
      local_330 = 0;
      uStack_328 = 0;
      local_320 = uVar2;
                    /* try { // try from 001774c0 to 001774cd has its CatchHandler @ 00177564 */
      local_340 = &local_418;
      (*(code *)PTR_new_00247200)
                (&local_310,local_428,CONCAT44(uStack_43c,uStack_440),CONCAT44(uStack_434,local_438)
                 ,uStack_420 & 0xff);
                    /* try { // try from 001774ce to 001774ea has its CatchHandler @ 00177548 */
      auVar3 = odfunc(local_378,&local_358,&local_310);
                    /* try { // try from 001774eb to 001774fd has its CatchHandler @ 00177564 */
      core::ptr::drop_in_place<uu_od::output_info::OutputInfo>(&local_310);
                    /* try { // try from 001774fe to 0017750a has its CatchHandler @ 0017755f */
      core::ptr::
      drop_in_place<uu_od::inputdecoder::InputDecoder<uu_od::peekreader::PeekReader<uu_od::partialreader::PartialReader<uu_od::multifilereader::MultifileReader>>>>
                (&local_358);
                    /* try { // try from 0017750b to 00177517 has its CatchHandler @ 0017755a */
      core::ptr::
      drop_in_place<uu_od::peekreader::PeekReader<uu_od::partialreader::PartialReader<uu_od::multifilereader::MultifileReader>>>
                (&local_418);
                    /* try { // try from 00177518 to 00177521 has its CatchHandler @ 0017758d */
      core::ptr::drop_in_place<uu_od::OdOptions>(&local_480);
                    /* try { // try from 00177522 to 0017752e has its CatchHandler @ 0017759f */
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_3b0);
    }
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(auStack_498);
  return auVar3;
}