/* functions */
KFUNC(0x000426C0, _sx_xlock, void, (void *sx, int opts, const char *file, int line));
KFUNC(0x00042880, _sx_xunlock, void, (void *sx, const char *file, int line));
KFUNC(0x0000D7A0, kmalloc, void *, (uint64_t size, void *area, uint64_t flags));
KFUNC(0x0000D9A0, kfree, void, (void *ptr, void *area));
KFUNC(0x00638310, sceSblDriverMapPages, int, (uint64_t *gpu_paddr, void *cpu_vaddr, uint32_t npages, uint64_t flags, uint64_t unk, uint64_t *gpu_desc));
KFUNC(0x00638A00, sceSblDriverUnmapPages, int, (uint64_t gpu_desc));
KFUNC(0x0064BB50, map_chunk_table, int, (uint64_t *gpu_paddr, uint64_t *gpu_desc, void *cpu_vaddr));
KFUNC(0x0064BD20, make_chunk_table_system, int, (uint64_t *segment_info_gpu_paddr, uint64_t *segment_info_gpu_desc, void *segment_info_cpu_vaddr, size_t segment_info_size, void *chunk_table_cpu_vaddr, size_t chunk_table_size));
KFUNC(0x0064BD20, sceSblServiceMailbox, int, (uint64_t module_id, void *query, void *reply));
KFUNC(0x0065FF70, _sceSblAuthMgrSmFinalize, int, (void *ctx));

KFUNC(0x000B06D0, kern_get_self_auth_info, int, (struct thread* td, int pathseg, const char* path, char* info));

/* globals */
KDATA(0x0113E518, prison0, void*);
KDATA(0x01B16840, M_AUTHMGR, void);
KDATA(0x02300320, rootvnode, void*);
KDATA(0x026B4310, sceSblAuthMgrModuleId, uint64_t);
KDATA(0x026B40C8, authmgr_sm_xlock, void);
KDATA(0x026B4130, self_ctx_status, uint32_t);
KDATA(0x026B4140, self_contexts, self_context_t);
