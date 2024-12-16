# Get Next Line
Bir dosya tanımlayıcısından satır okumak oldukça zahmetli

## Özet:
Bu proje, bir dosya tanımlayıcısından satır okuyan bir fonksiyon programlamak üzerinedir.
Sürüm: 12

## İçindekiler
I. Hedefler 2
II. Ortak Talimatlar 3
III. Zorunlu Kısım 5
IV. Bonus Kısım 7
V. Teslim ve Akran Değerlendirmesi 8

## Bölüm I: Hedefler
Bu proje, yalnızca koleksiyonunuza çok kullanışlı bir fonksiyon eklemekle kalmayacak, aynı zamanda C programlamada oldukça ilginç yeni bir kavram öğrenmenizi sağlayacaktır: statik değişkenler.

## Bölüm II: Ortak Talimatlar
• Projeniz C dilinde yazılmalıdır.
• Projeniz Norm'a uygun yazılmalıdır. Bonus dosyaları/fonksiyonları varsa, bunlar da norm kontrolüne dahil edilecek ve norm hatası varsa 0 alacaksınız.
• Fonksiyonlarınız tanımsız davranışlar dışında beklenmedik şekilde sonlanmamalıdır (segmentasyon hatası, bus hatası, çift serbest bırakma vb.). Bu olursa, proje işlevsiz sayılacak ve 0 alacaktır.
• Yığın (heap) üzerinde ayrılan bellek alanı gerektiğinde düzgün şekilde serbest bırakılmalıdır. Bellek sızıntısına izin verilmez.
• Konu gerektiriyorsa, kaynak dosyaları -Wall, -Wextra ve -Werror bayrakları ile derlenecek şekilde bir Makefile sunmalısınız, cc kullanmalısınız ve Makefile yeniden bağlantı yapmamalıdır.
• Makefile'ınız en az $(NAME), all, clean, fclean ve re kurallarını içermelidir.
• Projenize bonus eklemek için, Makefile'ınızda projenin ana bölümünde yasaklanmış tüm başlıkları, kütüphaneleri veya fonksiyonları ekleyen bir bonus kuralı olmalıdır. Bonus dosyaları, konuda başka bir şey belirtilmediyse, _bonus.{c/h} uzantılı dosyalarda olmalıdır. Zorunlu ve bonus kısımların değerlendirilmesi ayrı ayrı yapılır.
• Projeniz libft kullanımına izin veriyorsa, kaynaklarını ve ilişkili Makefile'ını libft klasörüne kopyalamalısınız. Projenizin Makefile'ı önce kütüphaneyi, sonra projeyi derlemeli.
• Projeye test programları oluşturmanızı tavsiye ederiz. Bu çalışma teslim edilmeyecek ve notlandırılmayacak olsa da, çalışmanızı ve akranlarınızın çalışmasını kolayca test etmenize yardımcı olacaktır.
• Çalışmanızı atanan git deposuna teslim edin. Yalnızca git deposundaki çalışma notlandırılacaktır.

## Bölüm III: Zorunlu Kısım
Fonksiyon Adı: get_next_line
Prototip: char *get_next_line(int fd);
Teslim Dosyaları: get_next_line.c, get_next_line_utils.c, get_next_line.h
Parametreler: fd - Okunacak dosya tanımlayıcısı
Dönüş Değeri:
- Okunan Satır: Doğru davranış
- NULL: Okunacak bir şey kalmadığında veya bir hata oluştuğunda

Dış Fonksiyonlar: read, malloc, free

Açıklama: Bir dosya tanımlayıcısından satır okuyan bir fonksiyon yazın

• get_next_line() fonksiyonunun tekrarlı çağrıları (örneğin bir döngü kullanarak), dosya tanımlayıcısı tarafından işaret edilen metin dosyasını satır satır okumanıza izin vermelidir.
• Fonksiyonunuz okunan satırı geri döndürmelidir.
• Okunacak bir şey kalmadığında veya bir hata oluştuğunda NULL döndürmelidir.
• Fonksiyonunuzun hem dosya okurken hem de standart girdiden okurken beklendiği gibi çalıştığından emin olun.
• Döndürülen satır, dosya sonu \n karakterle bitmiyorsa \n karakterini içermelidir.
• get_next_line.h başlık dosyanız en azından get_next_line() fonksiyonunun prototipini içermelidir.
• İhtiyaç duyduğunuz tüm yardımcı fonksiyonları get_next_line_utils.c dosyasına ekleyin.
• Statik bir değişkenin ne olduğunu bilmek iyi bir başlangıç olacaktır.
• get_next_line() içinde dosya okuyacağınız için, derleyici çağrınıza bu seçeneği ekleyin: -D BUFFER_SIZE=n
• Bu, read() için tampon boyutunu tanımlayacaktır.
• Tampon boyutu değeri, akranlarınız ve Moulinette tarafından kodunuzu test etmek için değiştirilecektir.
• Bu projeyi -D BUFFER_SIZE bayrağı olmadan da derleyebilmemiz gerekir.
• Derleyebileceğiniz varsayılan değeri seçebilirsiniz.
• Kodunuzu şu şekilde derleyeceksiniz (örnek olarak 42 tampon boyutu kullanılmıştır):
    cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <dosyalar>.c
• get_next_line() fonksiyonunun, son çağrısından bu yana read() dosya sonuna ulaşmamışken dosya tanımlayıcısı değişirse tanımsız davranış gösterdiği kabul edilir.
• Ayrıca get_next_line() fonksiyonunun ikili (binary) bir dosya okurken tanımsız davranış gösterdiği kabul edilir. Ancak, isterseniz bu davranışı mantıklı bir şekilde ele alan bir uygulama yapabilirsiniz.

Kontrol Soruları:
• BUFFER_SIZE değeri 9999 olduğunda fonksiyonunuz hala çalışıyor mu? Ya da 1? 10000000?
• Neden?
• get_next_line() her çağrıldığında mümkün olduğunca az okuma yapmaya çalışın. Yeni bir satır ile karşılaşırsanız, mevcut satırı döndürmelisiniz.
• Tüm dosyayı okuyup sonra her satırı işlemeyin.

Yasaklananlar:
• Bu projede libft kullanmanıza izin verilmez.
• lseek() fonksiyonu yasaktır.
• Global değişkenler yasaktır.

## Bölüm IV: Bonus Kısım
Bu proje basit görünüyor ve karmaşık bonusları desteklemiyor. Ancak yaratıcılığınıza güveniyoruz. Zorunlu kısmı tamamladıysanız, bonus kısmı deneyebilirsiniz.

Bonus Kısım Gereksinimleri:
• get_next_line() fonksiyonunu yalnızca bir statik değişken kullanarak geliştirin.
• get_next_line() fonksiyonunuz aynı anda birden fazla dosya tanımlayıcısını yönetebilmelidir.
• Örneğin, 3, 4 ve 5 numaralı dosya tanımlayıcılarından okuyabiliyorsanız, her çağrıda farklı bir fd'den okuyabilmeli ve her dosya tanımlayıcısının okuma dizisini kaybetmemelisiniz.
• Bu, her bir fd'den sırayla okuyabilmeniz gerektiği anlamına gelir. Örneğin fd 3'ten, sonra 4'ten, sonra 5'ten, tekrar 3'ten, tekrar 4'ten vb.

Bonus dosyaları için _bonus.[c\h] soneki eklenecektir. Bu, zorunlu kısım dosyalarına ek olarak şu 3 dosyayı teslim edeceksiniz:
• get_next_line_bonus.c
• get_next_line_bonus.h
• get_next_line_utils_bonus.c

ÖNEMLİ: Bonus kısım yalnızca zorunlu kısım MÜKEMMEL ise değerlendirilecektir. Mükemmel, zorunlu kısmın eksiksiz ve hatasız tamamlanması demektir. Tüm zorunlu gereksinimleri karşılamadıysanız, bonus kısmınız hiç değerlendirilmeyecektir.

## Bölüm V: Teslim ve Akran Değerlendirmesi
Ödevi her zamanki gibi Git deponuza teslim edin. Yalnızca depodaki çalışma değerlendirilecektir. Dosya isimlerinizi çift kontrol ettiğinizden emin olun.

Test yazarken unutmayın:
1) Hem tampon boyutu hem de satır boyutu çok farklı değerler alabilir.
2) Dosya tanımlayıcısı yalnızca düzenli dosyalara işaret etmez.

Akranlarınızla bilgi alışverişi yapın ve savunma için kapsamlı bir test seti hazırlayın.

Başarılı olduktan sonra, get_next_line() fonksiyonunuzu libft'nize eklemeyi unutmayın.
