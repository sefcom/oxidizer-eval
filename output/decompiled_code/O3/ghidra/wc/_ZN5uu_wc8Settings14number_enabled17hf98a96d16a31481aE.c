void __rustcall uu_wc::Settings::number_enabled(long param_1)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined auVar6 [16];
  undefined8 local_18;
  undefined8 local_10;
  undefined local_8;
  undefined4 local_7;
  
  local_8 = *(undefined *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x19);
  auVar6 = ZEXT716(CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),(char)((uint)uVar1 >> 8)),
                            (ushort)(byte)uVar1) & 0xffffff00ffffff);
  auVar6 = pshuflw(auVar6,auVar6,0xb4);
  sVar2 = auVar6._0_2_;
  sVar3 = auVar6._2_2_;
  sVar4 = auVar6._4_2_;
  sVar5 = auVar6._6_2_;
  local_7 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * auVar6[6] - (0xff < sVar5),
                     CONCAT12((0 < sVar4) * (sVar4 < 0x100) * auVar6[4] - (0xff < sVar4),
                              CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar6[2] - (0xff < sVar3),
                                       (0 < sVar2) * (sVar2 < 0x100) * auVar6[0] - (0xff < sVar2))))
  ;
  local_18 = 0;
  local_10 = 5;
  _<core::array::iter::IntoIter<T,_>as_core::iter::traits::iterator::Iterator>::fold(&local_18);
  return;
}