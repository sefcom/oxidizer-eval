char _ZN5uu_mv24determine_overwrite_mode17h2a7c21ee43665632E(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_1,&DAT_0012623c,10);
  if (cVar1 != '\0') {
    return '\0';
  }
  cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_1,&DAT_00126231,0xb);
  return '\x02' - cVar1;
}