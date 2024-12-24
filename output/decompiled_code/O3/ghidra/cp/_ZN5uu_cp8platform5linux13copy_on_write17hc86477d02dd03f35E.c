undefined8 * __rustcall
uu_cp::platform::linux::copy_on_write
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
          undefined8 param_5,char param_6,char param_7,undefined8 param_8,undefined8 param_9,
          char param_10)

{
  long lVar1;
  undefined uVar2;
  ulong uVar3;
  undefined uVar4;
  undefined uVar5;
  bool bVar6;
  undefined auVar7 [16];
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  ulong local_38;
  
  if (param_6 == '\0') {
    if (param_7 != '\x01') {
      _<uu_cp::Error_as_core::convert::From<&str>>::from
                (param_1,"`--reflink=always` can be used only with --sparse=auto",0x36);
      return param_1;
    }
    uVar2 = 0;
    lVar1 = clone(param_2,param_3,param_4,param_5,0);
    uVar4 = 2;
    uVar5 = 1;
  }
  else {
    if (param_6 == '\x01') {
      if (param_7 == '\0') {
        if (param_10 != '\0') {
          auVar7 = copy_fifo_contents(param_2,param_3,param_4,param_5);
          lVar1 = auVar7._8_8_;
          if (auVar7._0_8_ != 0) goto LAB_00213181;
          uVar2 = 3;
          uVar4 = 4;
          uVar5 = 2;
          goto LAB_002131cd;
        }
        handle_reflink_auto_sparse_always(&local_50);
        local_38 = CONCAT71(local_38._1_7_,(char)local_50);
        if ((char)local_50 == '\0') {
          uVar5 = local_50._3_1_;
          uVar4 = local_50._2_1_;
          uVar2 = local_50._1_1_;
          if (local_50._4_1_ == '\x01') {
                    /* try { // try from 00213065 to 0021309f has its CatchHandler @ 0021324b */
            lVar1 = clone(param_2,param_3,param_4,param_5,1);
            goto LAB_0021316a;
          }
        }
        else {
          uVar5 = 2;
          uVar4 = 4;
          uVar2 = 0;
        }
        lVar1 = clone(param_2,param_3,param_4,param_5,2);
      }
      else {
        if (param_7 != '\x01') {
          if (param_10 != '\0') goto LAB_00212ea4;
          handle_reflink_auto_sparse_never(&local_50);
          local_38 = CONCAT71(local_38._1_7_,local_50._2_1_);
                    /* try { // try from 00212e1b to 00212e31 has its CatchHandler @ 00213237 */
          lVar1 = clone(param_2,param_3,param_4,param_5,1);
          uVar2 = local_50._1_1_;
          if ((char)local_50 != '\0') {
            uVar2 = 0;
          }
          uVar5 = local_50._3_1_;
          uVar4 = (undefined)local_38;
          if ((char)local_50 != '\0') {
            uVar4 = 1;
            uVar5 = 1;
          }
          core::ptr::drop_in_place<core::result::Result<uu_cp::CopyDebug,std::io::error::Error>>
                    ((char)local_50,local_48);
          goto LAB_0021317c;
        }
        if (param_10 != '\0') {
          auVar7 = copy_fifo_contents(param_2,param_3,param_4,param_5);
          lVar1 = auVar7._8_8_;
          if (auVar7._0_8_ != 0) goto LAB_00213181;
          uVar4 = 4;
          uVar5 = 1;
          uVar2 = 4;
          goto LAB_002131cd;
        }
        handle_reflink_auto_sparse_auto(&local_50);
        local_38 = CONCAT71(local_38._1_7_,(char)local_50);
        if ((char)local_50 == '\0') {
          uVar5 = local_50._3_1_;
          uVar4 = local_50._2_1_;
          uVar2 = local_50._1_1_;
          if (local_50._4_1_ == '\x03') {
                    /* try { // try from 0021300d to 00213047 has its CatchHandler @ 0021325f */
            lVar1 = clone(param_2,param_3,param_4,param_5,3);
            goto LAB_0021316a;
          }
        }
        else {
          uVar5 = 1;
          uVar4 = 4;
          uVar2 = 0;
        }
        lVar1 = clone(param_2,param_3,param_4,param_5,1);
      }
LAB_0021316a:
      uVar3 = local_38 & 0xff;
    }
    else {
      if (param_7 == '\0') {
        if (param_10 != '\0') {
          auVar7 = copy_fifo_contents(param_2,param_3,param_4,param_5);
          lVar1 = auVar7._8_8_;
          if (auVar7._0_8_ == 0) {
            uVar2 = 3;
            uVar4 = 1;
            uVar5 = 2;
            goto LAB_002131cd;
          }
          goto LAB_00213181;
        }
        handle_reflink_never_sparse_always(&local_50);
        local_38 = CONCAT71(local_38._1_7_,(char)local_50);
        if ((char)local_50 == '\0') {
          uVar5 = local_50._3_1_;
          uVar4 = local_50._2_1_;
          uVar2 = local_50._1_1_;
          if (local_50._4_1_ == '\x01') {
                    /* try { // try from 0021312b to 00213169 has its CatchHandler @ 0021320f */
            auVar7 = std::fs::copy(param_2,param_3,param_4,param_5);
            lVar1 = auVar7._8_8_;
            if (auVar7._0_8_ != 0) {
              uVar3 = 0;
              goto LAB_0021310c;
            }
            uVar3 = 0;
            goto LAB_002131c8;
          }
        }
        else {
          uVar5 = 2;
          uVar4 = 1;
          uVar2 = 0;
        }
        lVar1 = sparse_copy(param_2,param_3,param_4,param_5);
        goto LAB_0021316a;
      }
      if (param_7 != '\x01') {
        if (param_10 == '\0') {
          local_38 = param_4;
          handle_reflink_never_sparse_never(&local_50);
          bVar6 = (char)local_50 != '\0';
          uVar5 = local_50._3_1_;
          if (bVar6) {
            uVar5 = 1;
          }
          uVar4 = local_50._2_1_;
          if (bVar6) {
            uVar4 = 1;
          }
          uVar2 = local_50._1_1_;
          if (bVar6) {
            uVar2 = 0;
          }
                    /* try { // try from 00212fc0 to 00212fd4 has its CatchHandler @ 002131fb */
          auVar7 = std::fs::copy(param_2,param_3,local_38,param_5);
          lVar1 = auVar7._8_8_;
          if (auVar7._0_8_ != 0) {
            core::ptr::drop_in_place<core::result::Result<uu_cp::CopyDebug,std::io::error::Error>>
                      (local_50 & 0xff,local_48);
            goto LAB_00213181;
          }
          core::ptr::drop_in_place<core::result::Result<uu_cp::CopyDebug,std::io::error::Error>>
                    (local_50 & 0xff,local_48);
          goto LAB_002131cd;
        }
LAB_00212ea4:
        auVar7 = copy_fifo_contents(param_2,param_3,param_4,param_5);
        lVar1 = auVar7._8_8_;
        if (auVar7._0_8_ != 0) goto LAB_00213181;
        uVar2 = 3;
        uVar5 = 1;
        uVar4 = 1;
        goto LAB_002131cd;
      }
      if (param_10 != '\0') goto LAB_00212ea4;
      handle_reflink_never_sparse_auto(&local_50);
      local_38 = CONCAT71(local_38._1_7_,(char)local_50);
      if ((char)local_50 != '\0') {
        uVar5 = 1;
        uVar4 = 1;
        uVar2 = 0;
LAB_002130e1:
        auVar7 = std::fs::copy(param_2,param_3,param_4,param_5);
        lVar1 = auVar7._8_8_;
        if (auVar7._0_8_ != 0) {
          uVar3 = local_38 & 0xff;
LAB_0021310c:
          core::ptr::
          drop_in_place<core::result::Result<(uu_cp::CopyDebug,uu_cp::platform::linux::CopyMethod),std::io::error::Error>>
                    (uVar3,local_48);
          goto LAB_00213181;
        }
        uVar3 = local_38 & 0xff;
LAB_002131c8:
        core::ptr::
        drop_in_place<core::result::Result<(uu_cp::CopyDebug,uu_cp::platform::linux::CopyMethod),std::io::error::Error>>
                  (uVar3,local_48);
        goto LAB_002131cd;
      }
      uVar5 = local_50._3_1_;
      uVar4 = local_50._2_1_;
      uVar2 = local_50._1_1_;
      if (local_50._4_1_ != '\x03') goto LAB_002130e1;
                    /* try { // try from 002130bd to 002130f5 has its CatchHandler @ 00213223 */
      lVar1 = sparse_copy_without_hole(param_2,param_3,param_4,param_5);
      uVar3 = 0;
    }
    core::ptr::
    drop_in_place<core::result::Result<(uu_cp::CopyDebug,uu_cp::platform::linux::CopyMethod),std::io::error::Error>>
              (uVar3,local_48);
  }
LAB_0021317c:
  if (lVar1 != 0) {
LAB_00213181:
    local_50 = param_8;
    local_48 = param_9;
    local_40 = lVar1;
    _<uu_cp::Error_as_core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from
              (param_1,&local_50);
    return param_1;
  }
LAB_002131cd:
  *(undefined *)(param_1 + 1) = uVar2;
  *(undefined *)((long)param_1 + 9) = uVar4;
  *(undefined *)((long)param_1 + 10) = uVar5;
  *param_1 = 0xd;
  return param_1;
}