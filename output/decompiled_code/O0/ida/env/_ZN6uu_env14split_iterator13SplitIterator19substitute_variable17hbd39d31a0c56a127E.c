__int64 __fastcall uu_env::split_iterator::SplitIterator::substitute_variable(__int64 a1, _QWORD *a2)
{
  const void *v2; // r12
  signed __int64 v3; // r15
  __int64 v4; // r13
  void *v5; // r13
  int v6; // ecx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // rax
  _QWORD v11[2]; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE v12[8]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD *v13; // [rsp+18h] [rbp-90h] BYREF
  _DWORD v14[2]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v15; // [rsp+28h] [rbp-80h]
  size_t n[2]; // [rsp+38h] [rbp-70h]
  __int64 v17; // [rsp+48h] [rbp-60h] BYREF
  __int64 v18; // [rsp+50h] [rbp-58h]
  __int64 v19; // [rsp+58h] [rbp-50h]
  unsigned __int64 v20; // [rsp+60h] [rbp-48h] BYREF
  __int128 v21; // [rsp+68h] [rbp-40h]

  v13 = a2 + 3;
  uu_env::variable_parser::VariableParser::parse_variable((__int64)v14, &v13);
  if ( v14[0] == 8 )
  {
    v2 = (const void *)n[0];
    v3 = n[1];
    v21 = v15;
    v20 = 0x8000000000000000LL;
    std::env::var_os(v11, &v20);
    if ( v11[0] == 0x8000000000000000LL )
    {
      if ( !v2 )
      {
        *(_DWORD *)a1 = 8;
        return a1;
      }
      if ( v3 < 0 )
        core::panicking::panic_nounwind(anon_9b87b42699a6e8db798014e3917c8532_16_llvm_5650560785558774950, 71LL);
      core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
      v4 = a2[2];
      if ( *a2 - v4 < (unsigned __int64)v3 )
      {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a2, a2[2], v3);
        v4 = a2[2];
      }
      v5 = (void *)(a2[1] + v4);
      core::intrinsics::copy_nonoverlapping::precondition_check(v2, v5, 1LL, 1LL, v3);
      memcpy(v5, v2, v3);
      a2[2] += v3;
    }
    else
    {
      uu_env::string_expander::StringExpander::put_string(a2, (__int64)v11);
    }
    v9 = v11[0];
    *(_DWORD *)a1 = 8;
    if ( v9 != 0x8000000000000000LL )
    {
      alloc::raw_vec::RawVec<T,A>::current_memory(&v17, v11);
      if ( v18 )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v12, v17, v18, v19);
    }
  }
  else
  {
    v6 = v14[1];
    v7 = v15;
    v8 = *(_OWORD *)n;
    *(_DWORD *)a1 = v14[0];
    *(_DWORD *)(a1 + 4) = v6;
    *(_OWORD *)(a1 + 8) = v7;
    *(_OWORD *)(a1 + 24) = v8;
  }
  return a1;
}
