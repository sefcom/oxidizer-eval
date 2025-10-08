byte _ZN7uu_stty13apply_setting17h519146f657897442E
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  undefined8 extraout_RDX;
  undefined8 uVar5;
  undefined4 local_2c;
  
  cVar2 = _ZN7uu_stty20apply_baud_rate_flag17he6909650e23d0221E();
  bVar3 = 1;
  if (cVar2 == '\x02') {
    local_2c = 0;
    uVar5 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(&local_2c);
    lVar4 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                      (uVar5,param_2,param_3);
    uVar5 = extraout_RDX;
    lVar1 = lVar4;
    if (lVar4 == 0) {
      uVar5 = param_3;
      lVar1 = param_2;
    }
    bVar3 = _ZN7uu_stty10apply_flag17he0c99d1085d1e908E(param_1,lVar1,uVar5,lVar4 != 0);
    if (((bVar3 == 2) &&
        (bVar3 = _ZN7uu_stty10apply_flag17h3592b40468ad7979E(param_1,lVar1,uVar5,lVar4 != 0),
        bVar3 == 2)) &&
       (bVar3 = _ZN7uu_stty10apply_flag17ha0fffc5722e8937cE(param_1,lVar1,uVar5,lVar4 != 0),
       bVar3 == 2)) {
      bVar3 = _ZN7uu_stty10apply_flag17h86b64710a2727951E(param_1,lVar1,uVar5,lVar4 != 0);
      bVar3 = bVar3 & 1;
    }
  }
  return bVar3;
}