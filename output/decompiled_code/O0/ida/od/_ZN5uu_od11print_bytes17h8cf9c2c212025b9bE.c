unsigned __int64 __fastcall uu_od::print_bytes(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  unsigned __int64 result; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  void (__fastcall *v15)(char *, double); // r15
  double v16; // xmm0_8
  void *v17; // r13
  size_t v18; // r12
  __int64 v19; // r15
  void *v20; // r15
  unsigned __int64 uint; // rax
  void *v22; // r13
  size_t v23; // r12
  __int64 v24; // r15
  void *v25; // r15
  __int64 v26; // rdx
  bool v27; // cf
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rsi
  void *v31; // r13
  size_t v32; // r12
  __int64 v33; // r15
  void *v34; // r15
  unsigned __int64 v35; // r15
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r15
  __int64 v38; // rax
  char **v39; // rdi
  char **v40; // rax
  char v41; // [rsp+Fh] [rbp-349h] BYREF
  __int64 v42; // [rsp+10h] [rbp-348h] BYREF
  __int64 v43; // [rsp+18h] [rbp-340h]
  __int64 v44; // [rsp+20h] [rbp-338h] BYREF
  __int64 v45; // [rsp+28h] [rbp-330h] BYREF
  __int64 v46; // [rsp+30h] [rbp-328h]
  __int64 v47; // [rsp+38h] [rbp-320h]
  int v48; // [rsp+44h] [rbp-314h]
  _QWORD *v49; // [rsp+48h] [rbp-310h]
  __int64 v50; // [rsp+50h] [rbp-308h] BYREF
  __int64 v51; // [rsp+58h] [rbp-300h]
  __int64 v52; // [rsp+60h] [rbp-2F8h]
  char v53[8]; // [rsp+68h] [rbp-2F0h] BYREF
  void *v54; // [rsp+70h] [rbp-2E8h]
  size_t v55; // [rsp+78h] [rbp-2E0h] BYREF
  char v56[8]; // [rsp+80h] [rbp-2D8h] BYREF
  void *src; // [rsp+88h] [rbp-2D0h]
  size_t n; // [rsp+90h] [rbp-2C8h] BYREF
  char v59[8]; // [rsp+98h] [rbp-2C0h] BYREF
  void *v60; // [rsp+A0h] [rbp-2B8h]
  size_t v61; // [rsp+A8h] [rbp-2B0h] BYREF
  _BYTE v62[16]; // [rsp+B0h] [rbp-2A8h] BYREF
  char v63[8]; // [rsp+C0h] [rbp-298h] BYREF
  _QWORD v64[2]; // [rsp+C8h] [rbp-290h] BYREF
  _QWORD v65[2]; // [rsp+D8h] [rbp-280h] BYREF
  _QWORD v66[4]; // [rsp+E8h] [rbp-270h] BYREF
  _QWORD v67[4]; // [rsp+108h] [rbp-250h] BYREF
  _QWORD v68[6]; // [rsp+128h] [rbp-230h] BYREF
  _QWORD v69[6]; // [rsp+158h] [rbp-200h] BYREF
  _QWORD v70[6]; // [rsp+188h] [rbp-1D0h] BYREF
  _QWORD v71[6]; // [rsp+1B8h] [rbp-1A0h] BYREF
  _QWORD v72[6]; // [rsp+1E8h] [rbp-170h] BYREF
  char v73; // [rsp+218h] [rbp-140h]
  _QWORD v74[6]; // [rsp+220h] [rbp-138h] BYREF
  _QWORD v75[6]; // [rsp+250h] [rbp-108h] BYREF
  char v76; // [rsp+280h] [rbp-D8h]
  _QWORD v77[6]; // [rsp+288h] [rbp-D0h] BYREF
  _QWORD v78[6]; // [rsp+2B8h] [rbp-A0h] BYREF
  char v79; // [rsp+2E8h] [rbp-70h]
  __int64 v80; // [rsp+2F0h] [rbp-68h]
  __int64 v81; // [rsp+300h] [rbp-58h]
  __int64 v82; // [rsp+310h] [rbp-48h]
  __int64 v83; // [rsp+318h] [rbp-40h]
  char v84; // [rsp+320h] [rbp-38h]

  v50 = a1;
  v51 = a2;
  v49 = a4;
  v4 = a4[1];
  if ( !v4 || (v4 & 7) != 0 || (result = v49[2], result >= 0x13B13B13B13B13CLL) )
LABEL_67:
    core::panicking::panic_nounwind(anon_73050de727ff50a019884682d8624ba5_15_llvm_6296603921265638786, 162LL);
  if ( result )
  {
    v7 = v4 + 104 * result;
    v52 = v7;
    LOBYTE(v7) = 1;
    v48 = v7;
    do
    {
      v42 = 0LL;
      v43 = 1LL;
      v44 = 0LL;
      if ( *(_QWORD *)(a3 + 8) )
      {
        v8 = 0LL;
        do
        {
          v9 = v49[5];
          if ( !v9 )
            core::panicking::panic_const::panic_const_rem_by_zero(&off_12E5E8);
          if ( (v9 | v8) >> 32 )
          {
            v10 = v8 % v9;
            if ( v8 % v9 >= 8 )
              goto LABEL_71;
          }
          else
          {
            v10 = (unsigned int)v8 % (unsigned int)v9;
            if ( (unsigned int)v10 >= 8uLL )
LABEL_71:
              core::panicking::panic_bounds_check(v10, 8LL, &off_12E600);
          }
          v11 = *(_QWORD *)(v4 + 8 * v10 + 32);
          v66[0] = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
          v66[1] = <&T as core::fmt::Display>::fmt;
          v66[2] = v11;
          v66[3] = 0LL;
          v72[0] = 2LL;
          v72[2] = 1LL;
          v72[3] = 1LL;
          v72[4] = 0LL;
          v72[5] = 32LL;
          v73 = 1;
          v68[0] = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
          v68[1] = 1LL;
          v68[4] = v72;
          v68[5] = 1LL;
          v68[2] = v66;
          v68[3] = 2LL;
          if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v42, v68) )
            core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v41, &unk_12E418, &off_12E618);
          v15 = *(void (__fastcall **)(char *, double))(v4 + 8);
          if ( *(_QWORD *)v4 )
          {
            if ( *(_QWORD *)v4 == 1LL )
            {
              v16 = uu_od::inputdecoder::MemoryDecoder::read_float((_BYTE *)a3, v8, *(_QWORD *)(v4 + 16), v12, v13, v14);
              v15(v56, v16);
              v17 = src;
              if ( !src )
                goto LABEL_67;
              v18 = n;
              if ( (n & 0x8000000000000000LL) != 0LL )
                goto LABEL_67;
              v19 = v44;
              if ( v42 - v44 < n )
              {
                alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v42, v44, n);
                v19 = v44;
              }
              v20 = (void *)(v43 + v19);
              core::intrinsics::copy_nonoverlapping::precondition_check(v17, v20, 1LL, 1LL, v18);
              memcpy(v20, v17, v18);
              v44 += v18;
              alloc::raw_vec::RawVec<T,A>::current_memory(&v45, v56);
              if ( v46 )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&n, v45, v46, v47);
            }
            else
            {
              v26 = *(_QWORD *)(a3 + 8);
              v27 = __CFADD__(*(_QWORD *)(a3 + 16), v26);
              v28 = *(_QWORD *)(a3 + 16) + v26;
              if ( v27 )
              {
                v39 = &anon_73050de727ff50a019884682d8624ba5_68_llvm_6296603921265638786;
LABEL_76:
                core::panicking::panic_const::panic_const_add_overflow(v39);
              }
              v29 = *(_QWORD *)(*(_QWORD *)a3 + 8LL);
              if ( !v29 )
                goto LABEL_67;
              v30 = *(_QWORD *)(*(_QWORD *)a3 + 16LL);
              if ( v30 < 0 )
                goto LABEL_67;
              if ( v28 < v8 )
                core::slice::index::slice_index_order_fail(
                  v8,
                  v28,
                  &anon_73050de727ff50a019884682d8624ba5_69_llvm_6296603921265638786);
              if ( v30 < v28 )
              {
                v40 = &anon_73050de727ff50a019884682d8624ba5_69_llvm_6296603921265638786;
                goto LABEL_73;
              }
              ((void (__fastcall *)(char *, unsigned __int64, unsigned __int64))v15)(v59, v8 + v29, v28 - v8);
              v31 = v60;
              if ( !v60 )
                goto LABEL_67;
              v32 = v61;
              if ( (v61 & 0x8000000000000000LL) != 0LL )
                goto LABEL_67;
              v33 = v44;
              if ( v42 - v44 < v61 )
              {
                alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v42, v44, v61);
                v33 = v44;
              }
              v34 = (void *)(v43 + v33);
              core::intrinsics::copy_nonoverlapping::precondition_check(v31, v34, 1LL, 1LL, v32);
              memcpy(v34, v31, v32);
              v44 += v32;
              alloc::raw_vec::RawVec<T,A>::current_memory(&v45, v59);
              if ( v46 )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v61, v45, v46, v47);
            }
          }
          else
          {
            uint = uu_od::inputdecoder::MemoryDecoder::read_uint((_BYTE *)a3, v8, *(_QWORD *)(v4 + 16), v12, v13, v14);
            ((void (__fastcall *)(char *, unsigned __int64))v15)(v53, uint);
            v22 = v54;
            if ( !v54 )
              goto LABEL_67;
            v23 = v55;
            if ( (v55 & 0x8000000000000000LL) != 0LL )
              goto LABEL_67;
            v24 = v44;
            if ( v42 - v44 < v55 )
            {
              alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v42, v44, v55);
              v24 = v44;
            }
            v25 = (void *)(v43 + v24);
            core::intrinsics::copy_nonoverlapping::precondition_check(v22, v25, 1LL, 1LL, v23);
            memcpy(v25, v22, v23);
            v44 += v23;
            alloc::raw_vec::RawVec<T,A>::current_memory(&v45, v53);
            if ( v46 )
              <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v55, v45, v46, v47);
          }
          v27 = __CFADD__(*(_QWORD *)(v4 + 16), v8);
          v8 += *(_QWORD *)(v4 + 16);
          if ( v27 )
          {
            v39 = &off_12E630;
            goto LABEL_76;
          }
        }
        while ( v8 < *(_QWORD *)(a3 + 8) );
      }
      if ( (*(_BYTE *)(v4 + 96) & 1) != 0 )
      {
        if ( !v43 || v44 < 0 )
          goto LABEL_67;
        v35 = v49[4];
        if ( (unsigned __int64)v44 >= 0x20 )
          v36 = core::str::count::do_count_chars();
        else
          v36 = core::str::count::char_count_general_case();
        v27 = v35 < v36;
        v37 = v35 - v36;
        if ( v27 )
          v37 = 0LL;
        if ( !*(_QWORD *)(*(_QWORD *)a3 + 8LL) )
          goto LABEL_67;
        v30 = *(_QWORD *)(*(_QWORD *)a3 + 16LL);
        if ( v30 < 0 )
          goto LABEL_67;
        v28 = *(_QWORD *)(a3 + 8);
        if ( v30 < v28 )
        {
          v40 = &anon_73050de727ff50a019884682d8624ba5_67_llvm_6296603921265638786;
LABEL_73:
          core::slice::index::slice_end_index_len_fail(v28, v30, v40);
        }
        uu_od::prn_char::format_ascii_dump((__int64)v62, *(unsigned __int8 **)(*(_QWORD *)a3 + 8LL), v28);
        v70[0] = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
        v70[1] = <&T as core::fmt::Display>::fmt;
        v70[2] = v62;
        v70[3] = <alloc::string::String as core::fmt::Display>::fmt;
        v70[4] = v37;
        v70[5] = 0LL;
        v78[0] = 2LL;
        v78[2] = 1LL;
        v78[3] = 2LL;
        v78[4] = 0LL;
        v78[5] = 32LL;
        v79 = 1;
        v80 = 2LL;
        v81 = 2LL;
        v82 = 1LL;
        v83 = 32LL;
        v84 = 3;
        v69[0] = &unk_12E590;
        v69[1] = 2LL;
        v69[4] = v78;
        v69[5] = 2LL;
        v69[2] = v70;
        v69[3] = 3LL;
        if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v42, v69) )
          core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v41, &unk_12E418, &off_12E5B0);
        alloc::raw_vec::RawVec<T,A>::current_memory(&v45, v62);
        if ( v46 )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v63, v45, v46, v47);
      }
      if ( (v48 & 1) != 0 )
      {
        v64[0] = &v50;
        v64[1] = <&T as core::fmt::Display>::fmt;
        v74[0] = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
        v74[1] = 1LL;
        v74[4] = 0LL;
        v74[2] = v64;
        v74[3] = 1LL;
        std::io::stdio::_print(v74);
        v48 = 0;
      }
      else
      {
        if ( v51 < 0 )
          core::panicking::panic_nounwind(anon_73050de727ff50a019884682d8624ba5_11_llvm_6296603921265638786, 71LL);
        if ( !v50 )
          goto LABEL_67;
        if ( (unsigned __int64)v51 >= 0x20 )
          v38 = core::str::count::do_count_chars();
        else
          v38 = core::str::count::char_count_general_case();
        v67[0] = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
        v67[1] = <&T as core::fmt::Display>::fmt;
        v67[2] = v38;
        v67[3] = 0LL;
        v75[0] = 2LL;
        v75[2] = 1LL;
        v75[3] = 1LL;
        v75[4] = 0LL;
        v75[5] = 32LL;
        v76 = 1;
        v71[0] = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
        v71[1] = 1LL;
        v71[4] = v75;
        v71[5] = 1LL;
        v71[2] = v67;
        v71[3] = 2LL;
        std::io::stdio::_print(v71);
      }
      v65[0] = &v42;
      v65[1] = <alloc::string::String as core::fmt::Display>::fmt;
      v77[0] = &unk_12E5C8;
      v77[1] = 2LL;
      v77[4] = 0LL;
      v77[2] = v65;
      v77[3] = 1LL;
      std::io::stdio::_print(v77);
      result = alloc::raw_vec::RawVec<T,A>::current_memory(&v45, &v42);
      if ( v46 )
        result = <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v44, v45, v46, v47);
      v4 += 104LL;
    }
    while ( v4 != v52 );
  }
  return result;
}
