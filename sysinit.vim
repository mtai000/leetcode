" /usr/share/nvim/sysinit.vim
"

call plug#begin('/usr/share/nvim/plugged')
Plug 'junegunn/fzf.vim'
Plug 'neoclide/coc.nvim', {'branch': 'release'}
" Plug 'scrooloose/nerdtree', { 'on': 'NERDTreeToggle' }
Plug 'scrooloose/nerdtree', { 'on': 'NERDTreeToggle' }
" Plug 'ycm-core/YouCompleteMe', { 'do': './install.py' }
call plug#end()

syntax on
filetype on
set ruler
set number
set tabstop=2
set shiftwidth=2
set softtabstop=2
set hidden
set ignorecase
set smartcase

nnoremap <leader>n :NERDTreeFocus<CR>
nnoremap <C-n> :NERDTree<CR>
nnoremap <C-t> :NERDTreeToggle<CR>
nnoremap <C-f> :NERDTreeFind<CR>

let g:fzf_preview_window = 'right:60%'
let g:fzf_commits_log_options = '--graph --color=always --format="%C(auto)%h%d %s %C(black)%C(bold)%cr"'

let g:fzf_layout = { 'window': { 'width': 0.9, 'height': 0.8 } }
