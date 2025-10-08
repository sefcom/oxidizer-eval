long long linera_summary::ci_runtime_comparison::CiRuntimeComparison::get_runtimes(unsigned long a0, unsigned long long a1)
{
    char v0;  // [bp-0x551]
    void* v1;  // [bp-0x550]
    void* v2;  // [bp-0x548]
    void* v3;  // [bp-0x538]
    unsigned long long v4;  // [bp-0x530]
    unsigned int v5;  // [bp-0x528]
    unsigned int v6;  // [bp-0x524]
    unsigned long long v7;  // [bp-0x520]
    char v8;  // [bp-0x518]
    int v9;  // [bp-0x4f8]
    int v10;  // [bp-0x4e0]
    int v11;  // [bp-0x4c8]
    int v12;  // [bp-0x470]
    int v13;  // [bp-0x458]
    int v14;  // [bp-0x440]
    int v15;  // [bp-0x3e8]
    int v16;  // [bp-0x390]
    int v17;  // [bp-0x378]
    int v18;  // [bp-0x360]
    int v19;  // [bp-0x348]
    int v20;  // [bp-0x330]
    int v21;  // [bp-0x318]
    unsigned long long v22;  // [bp-0x2d4]
    unsigned long long v23;  // [bp-0x2cc]
    unsigned int v24;  // [bp-0x2c4]
    unsigned long long v25;  // [bp-0x2c0]
    char v26;  // [bp-0x2b8]
    int v27;  // [bp-0x2b7]
    int v28;  // [bp-0x2b0]
    char v29;  // [bp-0x278]
    unsigned long long v31;  // cc_ndep
    unsigned long long v32;  // rax
    unsigned long long v33;  // rax
    unsigned int v34;  // edx
    unsigned long v35;  // rdx
    unsigned long v36;  // rax
    char *v37;  // rdi
    unsigned long long v38;  // rsi
    unsigned long long v39;  // rdi

    v2 = 0;
    v3 = 0;
    v8.into_iter(a1);
    v29.next(&v8);
    if (!((char)(((0 ^ *((long long *)&v29)) & (0 ^ -(*((long long *)&v29)))) >> 63)))
    {
        do
        {
            ::libc.so.0::memcpy(&v9, &v29, 584);
            if (v26 != 3)
            {
                v36 = v26.__dispatch_ensure();
                goto LABEL_917914;
            }
            if ((char)v27 != 7)
            {
                v0 = (char)v27;
                if (v0 != 5)
                {
                    v36 = v0.__dispatch_ensure();
                    goto LABEL_917914;
                }
                if (v24)
                {
                    v28.entry(&v2, &v29);
                    v32 = v28.or_default();
                    v28.clone(&v16);
                    if (!v24)
                        core::option::unwrap_failed(&g_cf3390); /* do not return */
                    v6 = v24;
                    v7 = v25;
                    v5 = v23;
                    v4 = v22;
                    v33 = v6.signed_duration_since(&v4);
                    v35 = v34 > 0 & v33 < 0;
                    if ((char)_ccall(8, 4, v35, v33, v31))
                    {
                        *((long long *)&v1[8]) = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from();
                        *((unsigned long long *)v1) = 1;
                        v37 = &v28;
LABEL_917948:
                        core::ptr::drop_in_place<alloc::string::String>(v37);
                        core::ptr::drop_in_place<alloc::string::String>(&v10);
                        core::ptr::drop_in_place<url::Url>(&v11);
                        core::ptr::drop_in_place<alloc::string::String>(&v12);
                        core::ptr::drop_in_place<alloc::string::String>(&v13);
                        core::ptr::drop_in_place<url::Url>(&v14);
                        core::ptr::drop_in_place<url::Url>(&v15);
                        core::ptr::drop_in_place<alloc::string::String>(&v16);
                        core::ptr::drop_in_place<alloc::vec::Vec<octocrab::models::workflows::Step>>(&v17);
                        core::ptr::drop_in_place<alloc::string::String>(&v18);
                        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v19);
                        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v20);
                        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v21);
                        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<octocrab::models::workflows::Job>>(&v8);
                        return core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,alloc::collections::btree::map::BTreeMap<alloc::string::String,u64>>>(&v2);
                    }
                }
                else
                {
                    v38 = 46;
                    v39 = "Condition failed: `job.completed_at.is_some()`Condition failed: `job.conclusion.unwrap() == Conclusion::Success`Condition failed: `job.conclusion.is_some()`Condition failed: `job.status == Status::Completed`FieldSet corrupted (this is a bug)No base runtime";
LABEL_917a21:
                    v36 = v39.msg(v38);
LABEL_917914:
                    *((unsigned long *)&v1[8]) = v36;
                    *((unsigned long long *)v1) = 1;
                    v37 = &v9;
                    goto LABEL_917948;
                }
            }
            else
            {
                v38 = 44;
                v39 = "Condition failed: `job.conclusion.is_some()`Condition failed: `job.status == Status::Completed`FieldSet corrupted (this is a bug)No base runtime information found for job  of workflow No base runtime information found for workflow ";
                goto LABEL_917a21;
            }
            v32.insert(&v28, v35 + v33);
            core::ptr::drop_in_place<alloc::string::String>(&v10);
            core::ptr::drop_in_place<url::Url>(&v11);
            core::ptr::drop_in_place<alloc::string::String>(&v12);
            core::ptr::drop_in_place<alloc::string::String>(&v13);
            core::ptr::drop_in_place<url::Url>(&v14);
            core::ptr::drop_in_place<url::Url>(&v15);
            core::ptr::drop_in_place<alloc::string::String>(&v16);
            core::ptr::drop_in_place<alloc::vec::Vec<octocrab::models::workflows::Step>>(&v17);
            core::ptr::drop_in_place<alloc::string::String>(&v18);
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v19);
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v20);
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v21);
            v29.next(&v8);
        } while (*((long long *)&v29) != 0x8000000000000000);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<octocrab::models::workflows::Job>>(&v8);
    *((unsigned long long *)&v1[24]) = 0;
    *((int128_t *)&v1[8]) = *((int128_t *)&v2);
    *((unsigned long long *)v1) = 0;
    return 0;
}
