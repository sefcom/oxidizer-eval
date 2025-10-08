char _ZN5uu_cp11ClobberMode12from_matches17h6bc1ef902f3afca6E(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
          )(param_1,"force",5);
  if (cVar1 != '\0') {
    return '\0';
  }
  cVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
          )(param_1,"remove-destination",0x12);
  return '\x02' - cVar1;
}