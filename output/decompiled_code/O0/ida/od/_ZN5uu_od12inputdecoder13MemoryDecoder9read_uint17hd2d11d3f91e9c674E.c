        __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  char **v15; // rdx
  __int64 v16; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v17[2]; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v18[6]; // [rsp+18h] [rbp-30h] BYREF

  v16 = a3;
  v6 = a3 - 1;
  switch ( v6 )
  {
    case 0LL:
      v7 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
      if ( !v7 || (v8 = *(_QWORD *)(*(_QWORD *)a1 + 16LL), v8 < 0) )
        core::panicking::panic_nounwind(anon_7bf8453590977c7a3fe5e2865e6df318_8_llvm_976352915506230263, 162LL);
      if ( v8 <= a2 )
        core::panicking::panic_bounds_check(a2, v8, &anon_73050de727ff50a019884682d8624ba5_70_llvm_6296603921265638786);
      return *(unsigned __int8 *)(v7 + a2);
    case 1LL:
      v10 = a2 + 2;
      if ( a2 >= 0xFFFFFFFFFFFFFFFELL )
        core::panicking::panic_const::panic_const_add_overflow(&anon_73050de727ff50a019884682d8624ba5_71_llvm_6296603921265638786);
      v14 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
      if ( !v14 )
        goto LABEL_32;
      v12 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
      if ( v12 < 0 )
        goto LABEL_32;
      if ( v12 >= v10 )
      {
        if ( a1[24] && a1[24] == 1 )
          LOWORD(result) = __ROL2__(*(_WORD *)(v14 + a2), 8);
        else
          LOWORD(result) = *(_WORD *)(v14 + a2);
        return (unsigned __int16)result;
      }
      v15 = &anon_73050de727ff50a019884682d8624ba5_72_llvm_6296603921265638786;
      goto LABEL_42;
    case 3LL:
      v10 = a2 + 4;
      if ( a2 >= 0xFFFFFFFFFFFFFFFCLL )
        core::panicking::panic_const::panic_const_add_overflow(&anon_73050de727ff50a019884682d8624ba5_73_llvm_6296603921265638786);
      v11 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
      if ( !v11 )
        goto LABEL_32;
      v12 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
      if ( v12 < 0 )
        goto LABEL_32;
      if ( v12 < v10 )
      {
        v15 = &anon_73050de727ff50a019884682d8624ba5_74_llvm_6296603921265638786;
LABEL_42:
        core::slice::index::slice_end_index_len_fail(v10, v12, v15);
      }
      if ( a1[24] && a1[24] == 1 )
        LODWORD(result) = _byteswap_ulong(*(_DWORD *)(v11 + a2));
      else
        LODWORD(result) = *(_DWORD *)(v11 + a2);
      return (unsigned int)result;
    case 7LL:
      v10 = a2 + 8;
      if ( a2 >= 0xFFFFFFFFFFFFFFF8LL )
        core::panicking::panic_const::panic_const_add_overflow(&anon_73050de727ff50a019884682d8624ba5_75_llvm_6296603921265638786);
      v13 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
      if ( !v13 || (v12 = *(_QWORD *)(*(_QWORD *)a1 + 16LL), v12 < 0) )
LABEL_32:
        core::panicking::panic_nounwind(anon_73050de727ff50a019884682d8624ba5_15_llvm_6296603921265638786, 162LL);
      if ( v12 >= v10 )
      {
        if ( a1[24] && a1[24] == 1 )
          return _byteswap_uint64(*(_QWORD *)(v13 + a2));
        else
          return *(_QWORD *)(v13 + a2);
      }
      v15 = &anon_73050de727ff50a019884682d8624ba5_76_llvm_6296603921265638786;
      goto LABEL_42;
    default:
      v17[0] = &v16;
      v17[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v18[0] = &anon_73050de727ff50a019884682d8624ba5_78_llvm_6296603921265638786;
      v18[1] = 1LL;
      v18[4] = 0LL;
      v18[2] = v17;
      v18[3] = 1LL;
      ((void (__fastcall __noreturn *)(_QWORD *, char **, __int64, __int64, __int64, __int64, __int64))core::panicking::panic_fmt)(
        v18,
        &anon_73050de727ff50a019884682d8624ba5_79_llvm_6296603921265638786,
        v6,
        a4,
        a5,
        a6,
        v16);
  }
}
