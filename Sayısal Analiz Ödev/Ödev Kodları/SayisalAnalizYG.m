disp('Ev Tercihi ��in Analitik Hiyerar�i S�reci')
disp('Maliyet, B�y�kl�k, Hacim ve Ev Ya�� matrisleri girilmesi gerekiyor.')
alternatif=input('Ka� alternatif ev var:');

maliyet(alternatif,alternatif) = 0;
for i=1:alternatif 
    for j=1:alternatif 
        if i==j
            maliyet(i,j)=1;
            continue
        end
        if maliyet(j,i) ~= 0
            maliyet(i,j) = 1/maliyet(j,i);
            continue
        end
        if maliyet(i,j) == 0
            maliyet(i,j)=input([num2str(i) '. evin ' num2str(j) '. eve olan Maliyet �st�nl���: ']);
        end
    end
end
maliyet=reshape(maliyet,alternatif,alternatif);

buyukluk(alternatif,alternatif) = 0;
for i=1:alternatif 
    for j=1:alternatif 
        if i==j
            buyukluk(i,j)=1;
            continue
        end
        if buyukluk(j,i) ~= 0
            buyukluk(i,j) = 1/buyukluk(j,i);
            continue
        end
        if buyukluk(i,j) == 0
            buyukluk(i,j)=input([num2str(i) '. evin ' num2str(j) '. eve olan B�y�kl�k �st�nl���: ']);
        end
    end
end
buyukluk=reshape(buyukluk,alternatif,alternatif);

hacim(alternatif,alternatif) = 0;
for i=1:alternatif 
    for j=1:alternatif 
        if i==j
            hacim(i,j)=1;
            continue
        end
        if hacim(j,i) ~= 0
            hacim(i,j) = 1/hacim(j,i);
            continue
        end
        if hacim(i,j) == 0
            hacim(i,j)=input([num2str(i) '. evin ' num2str(j) '. eve olan Hacim �st�nl���: ']);
        end
    end
end
hacim=reshape(hacim,alternatif,alternatif);

evyasi(alternatif,alternatif) = 0;
for i=1:alternatif 
    for j=1:alternatif 
        if i==j
            evyasi(i,j)=1;
            continue
        end
        if evyasi(j,i) ~= 0
            evyasi(i,j) = 1/evyasi(j,i);
            continue
        end
        if evyasi(i,j) == 0
            evyasi(i,j)=input([num2str(i) '. evin ' num2str(j) '. eve olan Ev Ya�� �st�nl���: ']);
        end
    end
end
evyasi=reshape(evyasi,alternatif,alternatif);

%verileri aldik oncelikleri alalim

oncelikler(4,4) = 0;
for i=1:4 
    for j=1:4 
        if i==j
            oncelikler(i,j)=1;
            continue
        end
        if oncelikler(j,i) ~= 0
            oncelikler(i,j) = 1/oncelikler(j,i);
            continue
        end
        if oncelikler(i,j) == 0
            oncelikler(i,j)=input([num2str(i) '. �zelli�in ' num2str(j) '. �zelli�e olan �st�nl���: ']);
        end
    end
end
oncelikler=reshape(oncelikler,4,4);

%�ncelikleri de ald�k

ctopmaliyet= sum(maliyet);
cikarilanmaliyet = bsxfun(@rdivide, maliyet, ctopmaliyet);
ortmaliyet = sum(cikarilanmaliyet,2)/alternatif;

ctopbuyukluk= sum(buyukluk);
cikarilanbuyukluk = bsxfun(@rdivide, buyukluk, ctopbuyukluk);
ortbuyukluk = sum(cikarilanbuyukluk,2)/alternatif;

ctophacim= sum(hacim);
cikarilanhacim = bsxfun(@rdivide, hacim, ctophacim);
orthacim = sum(cikarilanhacim,2)/alternatif;

ctopevyasi= sum(evyasi);
cikarilanevyasi = bsxfun(@rdivide, evyasi, ctopevyasi);
ortevyasi = sum(cikarilanevyasi,2)/alternatif;

orts = [ortmaliyet(:), ortbuyukluk(:), orthacim(:), ortevyasi(:)];

ctoponcelikler= sum(oncelikler);
cikarilanoncelikler = bsxfun(@rdivide, oncelikler, ctoponcelikler);
ortoncelikler = sum(cikarilanoncelikler,2)/4;

sonuc = orts * ortoncelikler;

[yuzdelik,kacinciev] = max(sonuc);

disp(['%' num2str(yuzdelik*100) ' a��rl�kl� olarak ' num2str(kacinciev) '. ev se�ilmelidir.'])
disp("Onur Osman G�le - Fatih Enis Kaya - Taha Furkan Cansizo�lu - Orhun �zdemir - Fatih Aslan")
pause(31.4159265358)