char _ZN5uu_cp11ClobberMode12from_matches17h0d784cad540272bcE(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_1,"force",5);
  if (cVar1 != '\0') {
    return '\0';
  }
  cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_1,"remove-destination",0x12);
  return '\x02' - cVar1;
}