void _ZN7uu_stat6Stater14default_format17h2dd040e5543d36f9E
               (undefined8 param_1,int param_2,char param_3,char param_4)

{
  char *local_40;
  undefined8 local_38;
  char *local_30;
  undefined8 local_28;
  char *local_20;
  undefined8 local_18;
  char *local_10;
  undefined8 local_8;
  
  if (param_2 == 0) {
    if (param_3 != '\0') {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1259f2eee6e0998aE
                (param_1,"%n %s %b %f %u %g %D %i %h %t %T %X %Y %Z %W %o\n",0x30);
      return;
    }
    local_28 = 0x28;
    if (param_4 != '\0') {
      local_28 = 0x3d;
    }
    local_30 = "Device: %Dh/%dd\tInode: %-10i  Links: %h\n";
    if (param_4 != '\0') {
      local_30 = "Device: %Dh/%dd\tInode: %-10i  Links: %-5h Device type: %t,%T\n";
    }
    local_40 = "  File: %N\n  Size: %-10s\tBlocks: %-10b IO Block: %-6o %F\n";
    local_38 = 0x39;
    local_20 = "Access: (%04a/%10.10A)  Uid: (%5u/%8U)   Gid: (%5g/%8G)\n";
    local_18 = 0x38;
    local_10 = "Access: %x\nModify: %y\nChange: %z\n Birth: %w\n";
    local_8 = 0x2c;
    _ZN5alloc3str17join_generic_copy17h5d56894876c21caeE(param_1,&local_40);
    return;
  }
  if (param_3 != '\0') {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1259f2eee6e0998aE
              (param_1,"%n %i %l %t %s %S %b %f %a %c %d\n",0x21);
    return;
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1259f2eee6e0998aE
            (param_1,
             "  File: \"%n\"\n    ID: %-8i Namelen: %-7l Type: %T\nBlock size: %-10s Fundamental block size: %S\nBlocks: Total: %-10b Free: %-10f Available: %a\nInodes: Total: %-10c Free: %d\n"
             ,0xab);
  return;
}