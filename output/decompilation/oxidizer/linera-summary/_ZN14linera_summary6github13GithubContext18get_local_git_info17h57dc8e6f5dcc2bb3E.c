fn linera_summary::github::GithubContext::get_local_git_info(a0: i64) -> int {
    let v0: u64;  // [bp-0xb8]
    let v1: Result<struct24, struct16>;  // [bp-0xa8], Other Possible Types: struct24, struct40, u128
    let v2: Result<struct24, struct16>;  // [bp-0xa8]
    let v3: u64;  // [bp-0xa0]
    let v4: u64;  // [bp-0x98]
    let v5: u128;  // [bp-0x90]
    let v6: u64;  // [bp-0x88]
    let v7: u64;  // [bp-0x80]
    let v8: iNone;  // [bp-0x78]
    let v9: u64;  // [bp-0x68]
    let v10: u64;  // [bp-0x58]
    let v11: u64;  // [bp-0x48]
    let v12: struct24;  // [bp-0x40]
    let v13: u64;  // [bp-0x30]
    let v14: struct20;  // [bp-0x28]
    let v15: struct24;  // [bp-0x28]
    let v17: u64;  // rdx
    let v18: void*;  // rax
    let v19: u32;  // rdx
    let v20: u64;  // rax

    v1 = git2::repo::Repository::open_from_env();
    if (anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v1) & 1) {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: v17
        };
    }
    v2 = git2::repo::Repository::head(&vvar_67{reg 32});
    match v2 {
        Ok(_) => {
            v1 = v2 as i64;
            v3 = v0;
            return struct16 {
                field_0: 0x8000000000000000
                field_8: anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v1)
            };
        },
        Err(_) => {
            v0 = v3;
            v1 = git2::reference::Reference::peel_to_commit(&v0);
            if v1.field_0 {
                v1 = v1.field_0;
                v3 = v10;
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v1)
                };
            }
            v10 = v3;
            v14 = git2::commit::Commit::id(&v10 as u128);
            v12 = <T as alloc::string::SpecToString>::spec_to_string(&v14);
            if git2::reference::Reference::is_branch(&v0) {
                v18 = git2::reference::Reference::shorthand(&v0);
                if v18 {
                    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v18, v19);
                    v11 = v4;
                    v10 = *(&v1.field_0 as &i128);
                    v15 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("main");
                    v9 = v15.field_16;
                    v8 = *(&v15.field_0 as &i128);
                    v1 = *(&v12.field_0 as &i128) as u128;
                    v4 = v13;
                    v5 = v10;
                    v7 = v11;
                    return struct72 {
                        field_0: *(&v12.field_0 as &i128)
                        field_16: v4
                        field_24: v5 as i64
                        field_32: v6
                        field_40: v7
                        field_48: *(&v15.field_0 as &i128)
                        field_64: v9
                    };
                }
                v1 = struct40 {
                    field_0: "Failed to get current branch name"
                    field_8: 1
                    field_16: 8
                    field_24: 0
                };
                v20 = anyhow::__private::format_err(&v1);
            } else {
                v1 = struct40 {
                    field_0: "HEAD is not on a branch - it may be detached"
                    field_8: 1
                    field_16: 8
                    field_24: 0
                };
                v20 = anyhow::__private::format_err(&v1);
            }
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v20
            };
        },
    }
}
